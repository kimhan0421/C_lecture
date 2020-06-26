/*제곱을 구하는 함수를 작성하고 두번 호출한 후 그 결과값을 더하는 프로그램이다.*/
#include <stdio.h>
#include <math.h>

//제곱을 구하는 함수이다.
int square(int n) {
	double total;
	total = pow(n, 2);
	return (int)total;
}

int main() {
	int a, b, squ;
	printf("Enter a,b.\n");
	scanf("%d%d", &a, &b);//두 수를 입력받는다.
	squ = square(a) + square(b);//제곱을 구하는 함수를 두 번 호출 한 후 그 결과값을 더한다.
	printf("%d * %d + %d * %d = %d", a, a, b, b, squ);
	return 0;
}