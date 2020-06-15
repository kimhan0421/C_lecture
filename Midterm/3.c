#include <stdio.h>

int my_power(int num1, unsigned int num2)
{
	int n = 1;
	for (int i = 1; i <= num2; i++) {
		n *= num1;
	}
	return n;
}

int main()
{
	int a, result;
	unsigned int b;
	while (1) {
		printf("Enter numbers.\n");
		scanf("%d %d", &a, &b);
		if ((a == -1) && (b == -1)) {
				break;			
		}
		result = my_power(a, b);
		printf("%d power %d is %d.\n", a, b, result);
	}
	return 0;
}