/*���ѻ��� ����� ���α׷�.*/

#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

typedef struct {
	char word[20];         // �ܾ� ����ü 
	char meaning[100];     // �ܾ� �� 
} wordType;                // �ܾ� �� 

typedef struct {          // ���� ����ü 
	wordType dict[5000];  // 5000���� �ܾ� ����ü�� �̷���� �迭 
	int count;            //���� �ܾ� �� 
} dictType;

//d�� ����Ű�� �������� w�� ����Ű�� �ܾ ã�� meaning�� ���� 
char* search(char* w, dictType* d) {
	int i;
	for (i = 0; i < d->count; i++) {// i�� 0���� count���� ���� ������ 
		if (strcmp(d->dict[i].word, w) == 0)// ���ڿ� �� 
			return d->dict[i].meaning;// ������ meaning�� ���� 
	}
	return NULL; // �� ã���� ���� ���� 
}

//d�� ����Ű�� ������, w�� ����Ű�� �ܾ� ��� m�� ����Ű�� �ܾ� ���� ���� 
void insert(char* w, char* m, dictType* d) {
	strcpy(d->dict[d->count].word, w); // �ε��� count ��ġ�� �ܾ� �� ���� 
	strcpy(d->dict[d->count].meaning, m); // �ܾ� �� ���� 
	d->count++;              // ���� �ܾ� �� ���� 
}

int main() {
	char word[20], *there;// �ܾ��� �ִ� ���̴� 20����Ʈ 
	char meaning[100]; // �ܾ� ���� �ִ� 100����Ʈ 
	dictType mydict;
	mydict.count = 0; //mydict ����ü ��� ���� count�� 0���� �ʱ�ȭ 
	while (1) {
		printf("Enter a word to search.\n");
		gets(word);
		if (strcmp(word, "quit") == 0) {
			break;
		}			
		there = search(word, &mydict);
		if (there != NULL) {//�ܾ ã������
			puts(there);//ã�� �ܾ��� ���� ���÷���
		}			
		else {
			puts("No such word in current dictionary. Enter the meaning.");
			gets(meaning);
			insert(word, meaning, &mydict);// ���ο� �ܾ� ���� 
		}
	}
	return 0;
}
