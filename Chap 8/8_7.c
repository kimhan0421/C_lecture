/*재귀호출에 의해 1~n까지 순차적으로 출력하는 프로그램*/
#include <stdio.h>

void print_up(int n) {
	if (n == 0) { //베이스 케이스
		return;
	}
	else {
		print_up(n - 1);
		printf("%d ",n);
	}

}

int main() {
	int num;
	printf("Enter the last integer.\n");
	scanf("%d", &num);
	print_up(num);
	return 0;
}