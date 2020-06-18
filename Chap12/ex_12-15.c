/*재귀호출에 의해 strlen을 구현*/
#include <stdio.h>

recursive_strlen(const char *str) {
	if (*str == '\0') {
		return 0;
	}
	else {
		return (1 + recursive_strlen(++str));
	}
}

int main() {
	char text[30];
	printf("Enter a string.\n");
	gets(text);
	printf("Length is %d.\n", recursive_strlen(text);
	return 0;
}