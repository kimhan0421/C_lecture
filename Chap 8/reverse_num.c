/*�Էµ� 10���� �������� ��� ���α׷�*/
#include <stdio.h>

void reverse(int n) {
	if (n == 0) { return 0; } //���̽� ���̽�
	else {
		printf("%d", n % 10);
		reverse(n / 10); //�������- ���� ���� �� ������ ���ȣ��� �� ���� ����
						 //cf. �Ӹ���� - ���� ���ȣ���� �� �� �ǵ��ƿ��鼭 ���� ��.
	}
}

int main() {
	int num;
	printf("Enter a positive intger.\n");
	scanf("%d",&num);
	reverse(num);
	printf("\n");
	return 0;
}