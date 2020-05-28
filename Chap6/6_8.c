/*규칙을 가진 숫자들의 합계를 계산하는 프로그램*/
#include <stdio.h>

int main() {
	int n,sum=0;
	int num = 9; //처음 수로 초기화 한다.
	printf("Enter the number of terms.\n");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {//입력한 만큼 루프를 돈다.
		sum += num;
		num = num * 10 + 9; //다음수를 정한다
	}
	printf("The sum is %d.",sum);
	return 0;
}