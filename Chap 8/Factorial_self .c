/*입력된 자연수의 factorial구하는 프로그램 - 재귀호출*/
#include <stdio.h>

int fac(int n) {
	if (n == 1) {
		return 1; //베이스 케이스-재귀호출에서 빠져나오는 유일한 방법
	}
	else {
		return (n*fac(n - 1)); //재귀호출 일어남
	}
}

int main() {
	int num;
	printf("Enter a positive integer.\n");
	scanf("%d", &num);
	printf("Factorial of %d is %d \n", num, fac(num));
	return 0;
}

