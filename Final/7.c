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
	int num;
	scanf("%d", &num);
	printf("%d in decimal is ", num);
	decimal_to_binary(num);
	printf(" in binary.\n");
	return 0;
}
