/*�ټ����� �䳢�� ������� ���ϴ� ���α׷�*/
#define MAX 5
#include <stdio.h>

int main() {
	int i, sum = 0;
	double aver;
	int ra[MAX];

	printf("Enter weights of five rabbius.\n");
	for (i = 0; i < MAX; i++) {//5������ ���Ը� �Է¹���
		scanf("%d",&ra[i]);
	}
	for (i = 0; i < MAX; i++) {//�հ� ����. ��ȣ���Խ� �迭 �ε��� �ʰ�
		sum += ra[i];
	}
	printf("Average weight is %.3lf.\n",((double)sum)/MAX);//�ּ�
	printf("&rabbit[0] : %p.\n",&ra[0]);
	printf("&rabbit[1] : %p.\n", ra[1]);//�迭�� ��ü�� �ּ�
	printf("rabbit : %p.\n", ra);
	return 0;
}
