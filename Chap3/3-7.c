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

	printf("500원: %d개, 100원: %d개, 50원: %d개, 10원: %d개.\n", f_h, h, f, t);
	return 0;
}