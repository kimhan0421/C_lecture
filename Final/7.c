#include <stdio.h>

void decimal_to_binary(int n) {
	if (n < 2) printf("%d", n);
	else {
		decimal_to_binary(n / 2);
		printf("%d", n % 2);
	}
}


int main() {
	printf("Enter a Decimal Number.\n");
	int n;
	scanf("%d", &n);
	printf("%d in decimal is ", n);
	decimal_to_binary(n);
	printf(" in binary.\n");
	return 0;
}