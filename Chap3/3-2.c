#include <stdio.h>
int main() {
	int c;
	int F;

	printf("Enter degrees in Celcius.\n");
	scanf("%d", &c);
	F= (9 * c) / 5 + 32;
	printf("%d degrees in Celcius is %d degrees in Fahrenheit.\n", c, F);
	return 0;
}