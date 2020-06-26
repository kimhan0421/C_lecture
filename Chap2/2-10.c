#include <stdio.h>

int main() {
	int i;
	for (i = 0; i <= 127; i++) {
		printf("%d\t%c\n", i, i);
		printf("10진수\t아스키문자\n");
	}
	return 0;
}