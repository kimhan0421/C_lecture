/*��Ģ�� ���� ���ڵ��� �հ踦 ����ϴ� ���α׷�*/
#include <stdio.h>

int main() {
	int n,sum=0;
	int num = 9; //ó�� ���� �ʱ�ȭ �Ѵ�.
	printf("Enter the number of terms.\n");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {//�Է��� ��ŭ ������ ����.
		sum += num;
		num = num * 10 + 9; //�������� ���Ѵ�
	}
	printf("The sum is %d.",sum);
	return 0;
}