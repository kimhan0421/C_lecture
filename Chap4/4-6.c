/*�ݿø��ϴ� ���α׷��̴�.*/
#include <stdio.h>
#include <math.h>
double round_up(double n);//���ǽǼ��� �ݿø��� ���� �����ִ� �Լ��̴�.

double round_up(double n) {
	double m = floor(n + 0.5);//�ݿø� �Լ��� �Ѵ�.
	return m;
}

int main() {
	double a;
	int b;
	printf("Enter a positive real number.\n");
	scanf("%lf", &a);//���� �Ǽ��� �Է¹޴´�.
	b = (int)(round_up(a));//�ݿø��� ���� int������ ��ȯ�Ѵ�.
	printf("The round up value is %d", b);//b�� ����Ѵ�.
	return 0;
}