#include <stdio.h>
#define true 1
#define false 0

int main() {
	char ch, a[100], b[100];
	int i, length;	
	int pa;

	while (1) {

		printf("Enter a sentence.\n");

		length = 0;
		while ((ch = getchar()) != '\n') {
			a[length] = ch;
			length++;
		}

		if (length == 1 && a[0] == 'Q')
			break;

		for (i = 0; i < length; i++)	
			b[length - 1 - i] = a[i];

		pa = true;
		for (i = 0; i < length; i++) {
			if (a[i] != b[i]) {
				pa = false;
				break;
			}
		}
		if (pa)
			printf("Yes.\n");
		else
			printf("No.\n");
	}
	return 0;
}
