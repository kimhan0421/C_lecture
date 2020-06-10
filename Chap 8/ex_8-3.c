/*정수가 입력될 때마다 그때까지의 누계를 출력하려는 프로그램*/
# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum;

void sum_up(int n) {
	sum += n;
	printf("Accumlated sum is %d.\n", sum);
}
int main() {
	int num = 0, i, sum = 0;
	for (i = 1; i < 4; i++) {
		printf("Enter an integer.\n");
		scanf("%d", &num);
		sum_up(num);
	}
	return 0;
}