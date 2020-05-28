/* 2������ 10������ ��ȯ.*/

#include <stdio.h>
#include <math.h>
int bin_to_dec(long long n);//x�� y�� ���

int bin_to_dec(long long n)
{
	long long result = 0;
	int squareCount = 0;
	while (n > 0){
		result += n % 10 * pow(2, squareCount++);
		n /= 10;
	}
	return (int)result;
}

int main()
{
	long long input;//2������ longlongŸ���� 10������ ����
	printf("Enter a binary number.\n");
	scanf("%lld", &input);
	printf("The decimal value of binary %lld is %d.\n", input, bin_to_dec(input));//�Լ�ȣ��
	return 0;
}
