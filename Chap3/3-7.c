#include <stdio.h>

int main() {
	int amount, remaind;
	int f_h, h, f, t;

	printf("Enter the amount of change.\n");
	scanf("%d", &amount);

	f_h = amount / 500;
	remaind = amount % 500;

	h = remaind / 100;
	remaind = remaind % 100;

	f = remaind / 50;
	remaind = remaind % 50;

	t = remaind / 10;

	printf("500��: %d��, 100��: %d��, 50��: %d��, 10��: %d��.\n", f_h, h, f, t);
	return 0;
}