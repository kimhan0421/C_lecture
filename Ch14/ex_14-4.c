/*2�� ���� ����-3���� �л� ������ �Է¹޾� 2�����Ϸ� ���*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

typedef struct {//����ü Ÿ�� ����
	int id;
	char name[20];
}sType;

int main() {
	int i, cnt;
	sType arr[MAX];//�迭 ����

	FILE* dest = fopen("student.bin", "wb");//���� ���� ���� �̶� Ȯ���ڴ� .bin�̴�
	if (dest == NULL) {
		fprintf(stderr, "Error opening ouput file.\n");
		exit(1);
	}
	for (i = 0; i < MAX; i++) {//��� ���� �� �Է¹���
		printf("Enter id, name.\n");
		scanf("%d%s", &(arr[i]), arr[i].name);
	}
	for (i = 0; i < MAX; i++) {
		cnt = fwrite((void*)&arr[i], sizeof(sType), 1, dest);//���� �������� ����ü �ϳ� ���
		if (cnt < 1) {//����ü �ϳ� ����Ҷ����� ���� ī��Ʈ
			fprintf(stderr, "Error while writing a structure.\n");
			exit(1);
		}
	}
	fclose(dest);
	return 0;
}