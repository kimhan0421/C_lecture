/* append ��忡�� ������ �����Ҽ� �ְ��� �������α׷�*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
typedef struct {//�ܾ��ü
	char word[20];//�ܾ��
	char meaning[100];//�ܾ��
} wordType;

//dict �迭���� w�� ����Ű�� �ܾ� ã��. count�� �迭 �� ���� �ܾ� ���� 
char* search(char* w, wordType dict[], int count) {
	int i;
	for (i = 0; i < count; i++) {      // 0 ���� count ���� ���� ������ 
		if (strcmp(dict[i].word, w) == 0)   //�迭 �ܾ���� w�� ����Ű�� �ܾ��� ������ 
			return dict[i].meaning;       //�ܾ� ���� ���� 
	}
	return NULL;       //�׷� �ܾ ������ ���� ���� 
}
// dict �迭�� w�� ����Ű�� �ܾ� �߰��ϱ�. cptr�� count ������ ����Ű�� ������ 
void insert(char* w, char* m, wordType dict[], int* cptr) {
	strcpy(dict[*cptr].word, w); // �迭 ���� ���ο� �ܾ� �� �߰� 
	strcpy(dict[*cptr].meaning, m); // �ܾ� �� �߰� 
	(*cptr)++; // �ܾ� �� ���� 
}
//���Ͽ� ���ο� �ܾ �߰��ϱ�. oldcnt�� ���� ���� �ܾ� ��, newcnt�� ���� �ܾ� �� 
void save_dictionary(FILE* fp, wordType dict[], int oldcnt, int newcnt) {
	int i;
	fseek(fp, 0, SEEK_END); //��ġ �����͸� ���� ������ 
	for (i = oldcnt; i < newcnt; i++) { // �߰��� �ܾ ���ؼ� 
		if (fwrite(dict + i, sizeof(wordType), 1, fp) < 1) {
			// ����ü�� �ϳ��� ���Ͽ� �����ϸ鼭 ���� ���� Ȯ��  
			fprintf(stderr, "Error writing a structure.\n"); // ���� ���� ó�� 
			exit(1); // exit 
		}
	}
}
//���� ���� �о� ���̱�. �ܾ� ���� ��� *cptr �� , count�� ���� 
void read_dictionary(FILE* fp, wordType dict[], int* cptr) {
	*cptr = 0;
	fseek(fp, 0, SEEK_SET); //append ���� ���� �����Ͱ� ���� ������ ��. �̸� ó������ 
	while (fread(dict + *cptr, sizeof(wordType), 1, fp)) {
		(*cptr)++; // ������ ������ �ܾ �迭�� �о� ���� 
	}

	if (!feof(fp)) { // ���� �� �׽�Ʈ 
		fprintf(stderr, "Error reading a structure.\n"); //�б� ���� ó�� 
		exit(1);
	}
}
int main() {
	char word[20], *there; // �ܾ� ���� �ִ� 20 ����Ʈ 
	char meaning[100]; // �ܾ� ���� �ִ� 100����Ʈ 
	int count, old_count;
	wordType mydict[5000]; // ����ü �迭�� ������ ���� 
	FILE* fp = fopen("dictionary.bin", "a+");
	// append binary(read and write) ���� ���� 
	read_dictionary(fp, mydict, &count); //count ���� �ٲ��� �ϴ� ���� ȣ��� 
	old_count = count; // �о�� ���� �ܾ� ������ old count�� ���� 
	while (1) {
		printf("Enter a word to search.\n");
		gets(word);
		if (strcmp(word, "quit") == 0) { // ���������� ���� 
			save_dictionary(fp, mydict, old_count, count); // �߰� �ܾ ���� ���� ���� �̾� ���� 
			break;
		}
		there = search(word, mydict, count);
		if (there != NULL) // �ܾ ã������ 
			puts(there); // ã�� �ܾ��� ���� ���÷��� 
		else {
			puts("No such word in current dictionary. Enter the meaning.");
			gets(meaning);
			insert(word, meaning, mydict, &count); // ���ο� �ܾ �迭 ���� �߰� 
		}
	}
	fclose(fp); //���� �ݱ� 
	return 0;
}