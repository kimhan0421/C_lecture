/*�ھƵ��� ������ �Ǻ�*/
/*�ھƵ���� = ������ �ڸ����� �� �ڸ����� �¼��� ���� ���� ���ڿ� ������ ���ڰ� ������ ���*/

#include <stdio.h>
#include <math.h>
int narciss(int n); // �ھƵ��� �� �̸� 1�� �����Ѵ�.

int main() {
	int num;
	printf("Enter a number.\n");
	scanf("%d",&num);
	if (narciss(num) == 1) {
		printf("Yes, %d is narcissistic number.\n", num);
	}
	else {
		printf("No, %d is not narcissistic number.\n", num);
	}
	return 0;
}

int narciss(int n) {
	if (n == 0) {return 1;}	
	int count = 0, sum = 0, div = 1, mul = 1;
	int n2 = n;

	while (n2)	{// �ڸ��� ���
		n2 /= 10;
		++count;
	}
	for (int i = 0; i < count - 1; ++i) {//�ڸ�����ŭ ������ ����
		div *= 10;
	}
	
	n2 = n;
	for (int i = div; i > 0; i /= 10){// ���ڸ����� count�� ��ŭ ������ ���� �� ����
		// count�� �� ����
		mul = 1;
		for (int j = 0; j < count; ++j)	{
			mul *= n2 / i;
		}
		sum += mul;
		n2 %= i; // �����ڸ���
	}
	if (sum == n){ return 1; }
	return 0;
}