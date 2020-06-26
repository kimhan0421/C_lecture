#include <stdio.h>
int main() {
	int a;
	int b;
	int c;
	double average;

	printf("Enter three integers.\n");
	scanf("%d%d%d", &a, &b, &c);
	average = (a + b + c) / (double)3;
	printf("The average of %d, %d, %d is %.3lf.\n", a, b, c, average);
	return 0;
}