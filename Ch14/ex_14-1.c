/*���ڴ����� from.txt���� �о� to.txt���Ϸ� �����ϴ� ���α׷�*/
#define _CRT_SECURE_NO_WARNINGS
//#define EOF -1 => ch�� int������ �ؾ� �ϴ� ����
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ch;//xh�� int������ ����
	FILE *f = fopen("from.txt","rt");
	FILE *t = fopen("to.txt", "wt");

	if (f == NULL || t == NULL) {
		printf("Error\n");
		exit(1);
	}
	while ((ch = fgetc(f)) != EOF) {//�ϳ��� ���ڰ� ch�� ��.�������� EOF�� ����
		fputc(ch, t);//to.txt�� ��
	}

	if (feof(f)) { printf("Copy Okay\n"); } //���� EOF���� �׽�Ʈ
	else{ printf("Copy Error\n"); }
	fclose(f);
	fclose(t);
	return 0;
}
/*EOF�� ���ϳ� Ȥ�� error �� �� ���ϵǱ� ������,
���� EOF���� �� �׽�Ʈ �ؾ� �Ѵ�.*/