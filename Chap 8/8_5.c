/*재귀호출에 의해 1~n까지 합 출력하는 프로그램*/
#include <stdio.h>

int sum(int n) {
	if (n == 1) { //베이스 케이스
		return 1;
	}
	else {
		return n + sum(n - 1);
	}
}

int main() {
	int num;
	printf("Enter the number.\n");
	scanf("%d",&num);
	printf("%d", sum(num));
	return 0;
}