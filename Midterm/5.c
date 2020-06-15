#include <math.h>
#include <stdio.h>

int main() {
	int input, r = 0, temp, size = 0;

	printf("Enter a natural number.\n");
	scanf("%d", &input);

	while (input != -1) {
		temp = input;
		r = 0;
		size = 0;
		while (temp > 0) {
			temp = temp / 10;
			size++;
		}

		temp = input;
		size--;
		while (temp > 0) {
			r += (temp % 10) * pow((double)10., (double)size--);
			temp /= 10;
		}

		if (r == input)
			printf("Yes\n");
		else
			printf("No\n");

		printf("Enter a natural number.\n");
		scanf("%d", &input);
	}

	return 0;
}