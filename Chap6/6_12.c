/*홀수 입력시 출력하는 프로그램*/

#include<stdio.h>

int main() {
	int num;

	printf("Enterthe number.\n");
	scanf("%d", &num);


	for (int i = 1; i <= num; i++) { //별 개수가 홀수만큼 증가	
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

	for (int i = 1; i <= num; i += 2) { // 별의 입력갯수가 두개씩 증가, 홀수만큼 증가한다.
		for (int j = 1; j <= num - i; j += 2) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * i) - 1; j += 2) {
			printf("*");
		}

		printf("\n");
	}
	return 0;
}