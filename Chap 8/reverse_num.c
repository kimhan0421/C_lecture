/*입력된 10진수 역순으로 찍는 프로그램*/
#include <stdio.h>

void reverse(int n) {
	if (n == 0) { return 0; } //베이스 케이스
	else {
		printf("%d", n % 10);
		reverse(n / 10); //꼬리재귀- 먼저 일을 한 다음에 재귀호출로 들어가 할일 없다
						 //cf. 머리재귀 - 먼저 재귀호출을 한 후 되돌아오면서 일을 함.
	}
}

int main() {
	int num;
	printf("Enter a positive intger.\n");
	scanf("%d",&num);
	reverse(num);
	printf("\n");
	return 0;
}