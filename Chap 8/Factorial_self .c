/*�Էµ� �ڿ����� factorial���ϴ� ���α׷� - ���ȣ��*/
#include <stdio.h>

int fac(int n) {
	if (n == 1) {
		return 1; //���̽� ���̽�-���ȣ�⿡�� ���������� ������ ���
	}
	else {
		return (n*fac(n - 1)); //���ȣ�� �Ͼ
	}
}

int main() {
	int num;
	printf("Enter a positive integer.\n");
	scanf("%d", &num);
	printf("Factorial of %d is %d \n", num, fac(num));
	return 0;
}

