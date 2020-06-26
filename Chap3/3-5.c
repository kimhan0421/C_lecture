#include <stdio.h>

int main() {
	int a;

	printf("Enter a natural number.\n");
	scanf("%d", &a);
	printf("%d \n", ((a % 5) == 0) || ((a % 6) == 0));
	printf("%d \n", ((a % 5) == 0) && ((a % 6) == 0));
	printf("%d \n", ((a % 5) != 0) && ((a % 6) != 0));
	return 0;
}