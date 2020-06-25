#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
void swap_sentence(char* first, char* second) {
	char *temp;
	temp = *first;
	*first = *second;
	*second = temp;
}
*/
void swap_sentence(char* first, char* second) {
	char *temp = (char*)malloc(sizeof(char) * 101);
	strcpy(temp, first);
	strcpy(first, second);
	strcpy(second, temp);
}

int main() {
	char* f, * s;
	char buf[100];
	printf("Enter first sentence.\n");
	gets(buf);
	f = (char*)malloc(sizeof(char) * strlen(buf));
	strcpy(f, buf);
	buf[0] = '\0';
	printf("Enter second sentence.\n");
	gets(buf);
	s = (char*)malloc(sizeof(char) * strlen(buf));
	strcpy(s, buf);
	buf[0] = '\0';
	swap_sentence(f, s);
	printf("First sentence is %s. Second sentence is %s.", f, s);

	return 0;
}
