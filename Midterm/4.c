#include <stdio.h>

char mutually_primer(int a, int b) {
	int i, smaller;
	smaller = (a < b) ? a : b;
	for (i = 2; i <= smaller; i++) {
		if (((a % i) == 0) && ((b % i) == 0)) {
			return 'n';
		}
	}
	return 'y';
}
int main()
{
	signed int num1, num2;
	char result;
	while (1) {
		printf("Enter two numbers.\n");
		scanf("%d %d", &num1, &num2);
		if ((num1 == -1) &&(num2 == -1)) {
			break;
		}		
		result = mutually_primer(num1, num2);
		if (result == 'y') {
			printf("Yes, they are mutually prime.\n");
		}
		else {
			printf("No, they are not mutually prime.\n");
		}
	}
	return 0;
}

