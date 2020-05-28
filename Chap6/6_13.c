/*자아도취 수인지 판별*/
/*자아도취수 = 각각의 자릿수에 총 자릿수의 승수를 취해 더한 숫자와 원래의 숫자가 동일한 경우*/

#include <stdio.h>
#include <math.h>
int narciss(int n); // 자아도취 수 이면 1을 리턴한다.

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

	while (n2)	{// 자릿수 계산
		n2 /= 10;
		++count;
	}
	for (int i = 0; i < count - 1; ++i) {//자릿수만큼 나눌값 구함
		div *= 10;
	}
	
	n2 = n;
	for (int i = div; i > 0; i /= 10){// 각자릿수의 count승 만큼 값들을 구한 후 더함
		// count의 승 구함
		mul = 1;
		for (int j = 0; j < count; ++j)	{
			mul *= n2 / i;
		}
		sum += mul;
		n2 %= i; // 다음자릿수
	}
	if (sum == n){ return 1; }
	return 0;
}