/*자연수 자릿수를 반대로 출력*/

#include <stdio.h>
void reverse_it(int num);//자리 바꾸는 함수

void reverse_it(int num) {
	while( num > 0) {
		printf("%d", num % 10);
		num = num / 10;
	}
	printf("\n");
}


int main() {
	int n;
	while (1) {  //자연수 일떄 while문 실행
		printf("Enter a number N.\n");
		scanf("%d", &n);
		if (n <= 0) { //자연수 아니라면 break로 빠져나가 종료.
			break;
		}
		reverse_it(n);//reverse_it함수 호출
	}
	return 0;
}