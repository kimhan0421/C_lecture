/*�Ǻ���ġ ����
1, 1, 2, 3, 5, 8, 13, 21...*/

# include <stdio.h>

int fib(int n) {
	if (n < 3) {return 1;} //���̽� ���̽�, n = 1,2�϶�.
	else {
		return (fib(n - 1) + fib(n - 2)); // ���ȣ�� �ι� �Ͼ����.
	}
}

int main() {
	int num;
	printf("Enter a number N.\n");
	scanf("%d", &num);
	printf("%dth fibonacci number is %d.\n",num, fib(num));
	return 0;
}