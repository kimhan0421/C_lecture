/* 2진수를 10진수로 변환.*/

#include <stdio.h>
#include <math.h>
int bin_to_dec(long long n);//x의 y승 계산

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
	long long input;//2진수를 longlong타입의 10진수로 선언
	printf("Enter a binary number.\n");
	scanf("%lld", &input);
	printf("The decimal value of binary %lld is %d.\n", input, bin_to_dec(input));//함수호출
	return 0;
}
