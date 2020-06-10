/*피보나치 수열
1, 1, 2, 3, 5, 8, 13, 21...*/

# include <stdio.h>

int fib(int n) {
	if (n < 3) {return 1;} //베이스 케이스, n = 1,2일때.
	else {
		return (fib(n - 1) + fib(n - 2)); // 재귀호출 두번 일어나야함.
	}
}

int main() {
	int num;
	printf("Enter a number N.\n");
	scanf("%d", &num);
	printf("%dth fibonacci number is %d.\n",num, fib(num));
	return 0;
}