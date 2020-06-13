/*strchr,strstr을 테스틑 하는 프로그램*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char *here, *there;
	char text[] = "This is first. This is second. This is third.";
	const char ch = '.';

	here = strchr(text, ch);
	printf("Text after the first period is, %s\n",(here+2));

	strcpy(text, "it is a right answer.");
	there = strstr(text, "right");
	strncpy(there, "wrong", 5);
	puts(text);
	return 0;
}