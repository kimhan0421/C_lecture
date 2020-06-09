/*���ѻ����������� ���� ���� ������ ���Ͽ� ����*/
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

typedef struct {
	char word[20];// �ܾ� ����ü 
	char meaning[100];// �ܾ� �� 
} wordType; // �ܾ� �� 

typedef struct { // ���� ����ü 
	wordType dict[5000];// 5000���� �ܾ� ����ü�� �̷���� �迭 
	int count;//���� �ܾ� �� 
} dictType;

//d�� ����Ű�� �������� w�� ����Ű�� �ܾ ã�� meaning�� ���� 
char* search(char* w, dictType* d) {
	int i;
	for (i = 0; i < d->count; i++) {// i�� 0���� count���� ���� ������ 
		if (strcmp(d->dict[i].word, w) == 0) // ���ڿ� �� 
			return d->dict[i].meaning;// ������ meaning�� ���� 
	}
	return NULL; // �� ã���� ���� ���� 
}

//d�� ����Ű�� ������, w�� ����Ű�� �ܾ� ��� m�� ����Ű�� �ܾ� ���� ���� 
void insert(char* w, char* m, dictType* d) {
	strcpy(d->dict[d->count].word, w);// �ε��� count ��ġ�� �ܾ� �� ���� 
	strcpy(d->dict[d->count].meaning, m); // �ܾ� �� ���� 
	d->count++; // ���� �ܾ� �� ���� 
}

void save_dictionary(FILE* fp, dictType* mydict) {
	int i;
	fp = fopen("dictionary.bin", "wb"); //���� ���� ����� ���� ���� ���� ���� 
	i = fwrite(mydict, sizeof(*mydict), 1, fp); //���� ����ü �ϳ��� ���� 
	if (i < 1) {  //���� ���� Ȯ��  
		fprintf(stderr, "Error while writing.");
		exit(1);
	}
	fclose(fp);//���Ⱑ ���� ���� �ݱ� 
}

void read_dictionary(FILE* fp, dictType* mydict) {
	int i;
	if ((fp = fopen("dictionary.bin", "rb")) == NULL)  //���� ������ ������ 
		mydict->count = 0;//���� ����ü�� count�� 0���� �ʱ�ȭ 
	else {
		i = fread(mydict, sizeof(*mydict), 1, fp); // ���� ����ü �ϳ��� �о���� 
		if (i < 1) {
			fprintf(stderr, "Error while reading.");
			exit(1);
		}
		fclose(fp);//�бⰡ ���� ���� �ݱ� 
	}
}

int main() {
	char word[20], *there;     // �ܾ��� �ִ� ���̴� 20����Ʈ 
	char meaning[100];         // �ܾ� ���� �ִ� 100����Ʈ 
	dictType mydict;
	FILE* fp = NULL;

	//���� ������ ������ �Ʒ� �Լ��� ���� ���� ����ü�� �о�� 
	//���� ������ ������ �Ʒ� �Լ� ���ο��� ����ü ��� ���� count�� 0���� �ʱ�ȭ 
	read_dictionary(fp, &mydict);

	while (1) {
		printf("Enter a word to search.\n");
		gets(word);
		if (strcmp(word, "quit") == 0) {
			save_dictionary(fp, &mydict); //������ ���� ����ü�� ���Ͽ� ����
			break;
		}
		there = search(word, &mydict);
		if (there != NULL)
			puts(there);
		else {
			puts("No such word in current dictionary. Enter the meaning.");
			gets(meaning);
			insert(word, meaning, &mydict);     // ���ο� �ܾ� ���� 
		}
	}
	return 0;
}