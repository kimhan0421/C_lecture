#include <stdio.h>
#define true 1
#define false 0

int main() {
	char ch, a[100], b[100];
	int i, length;	//length is the number of array elements.
	int is_palindrome;

	while (1) {

		printf("Enter a sentence.\n");

		length = 0;
		while ((ch = getchar()) != '\n') {
			a[length] = ch;
			length++;
		}

		if (length == 1 && a[0] == 'Q')
			break;

		for (i = 0; i < length; i++)	// store array a into b in reverse order 
			b[length - 1 - i] = a[i];

		is_palindrome = true;
		for (i = 0; i < length; i++) {
			if (a[i] != b[i]) {
				is_palindrome = false;
				break;
			}
		}
		if (is_palindrome)
			printf("Yes, it is a palindrome.\n");
		else
			printf("No, it is not a palindrome.\n");
	}
	return 0;
}