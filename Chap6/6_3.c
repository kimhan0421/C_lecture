/*5배수 제외한 정수 합 구하는 프로그램*/
#include <stdio.h>

int main() {
	int n ,sum=0;
	printf("Enter a natural number.\n");
	scanf("%d",&n);
	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0) {//5의 배수 제외
			continue;
		}					
		 sum += i;//합을 구한다
	}
	printf("The sum is %d.\n",sum );
	return 0;
}