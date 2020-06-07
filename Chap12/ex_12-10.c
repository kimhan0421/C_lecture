#include <stdio.h>
#include <string.h>

int main() {
	char text[10];
	printf("Enter a text.\n");
	fgets(text, sizeof(text), stdin);
	printf("You entered %s.", text);
	printf(" It's length is %d.\n",strlen(text));

	text[strlen(text) - 1] = '\0';
	printf("You entered %s.",text);
	printf(" It's length is %d.\n", strlen(text));
	return 0;

}