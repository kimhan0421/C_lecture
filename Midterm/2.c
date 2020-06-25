/*#include<stdio.h>

int main() {
	int ch, state = 0, count = 0;

	printf("Enter a sentence.\n");
	for (ch = getchar(); ch != '\n'; ch = getchar()) {
		switch (state) {
		case 0:
			if ((ch == 'i')||(ch =='I') ){
				state = 1;
			}
			break;
		case 1:
			if (ch == 'n') {
				state = 2;
			}
			else {
				state = 0;
			}
			break;
		case 2:
			if ((ch == ' ') ||(ch =='.') ){
				state = 3;
			}
			else {
				state = 0;
			}
			break;
		case 3:
			count++;
			state = 0;
			break;
		defalut:
			break;
		}
	}
	printf("It appears exactly %d times.\n", count);
	putchar('\n');
	return 0;
}
*/
#include <stdio.h>

int main() {
	char character;
	int state, number_in = 0;

	printf("Enter a sentence.\n");
	state = 1;

	for ( ; ; ) {
		scanf("%c", &character);
		switch (state) {
		case 0:
			if (character == 32)
				state = 1;
			break;
		case 1:
			if (character == 'i' || character == 'I')
				state = 2;
			else if (character == 32)
				state = 1;
			else
				state = 0;
			break;
		case 2:
			if (character == 'n')
				state = 3;
			else if (character == 32)
				state = 1;
			else
				state = 0;
			break;
		case 3:
			if (character == 32 || character == '.') {
				number_in++;
				state = 1;
			}
			else
				state = 0;
			break;
		}
		if (character == '\n')
			break;
	}
	printf("It appears exactly %d times.\n", number_in);
	return 0;
}
