#include <stdio.h>
#include <string.h>

int my_strcmp(const char *str1, const char *str2) {
	const char* temp1 = str1;
	const char* temp2 = str2;

	while (*temp1 != '\0' && *temp2 != '\0') {
		if (*temp1 > *temp2)
			return 1;
		else if (*temp1 < *temp2)
			return -1;
		temp1++;
		temp2++;
	}
	if (*temp1 == '\0' && *temp2 == '\0')
		return 0;
	else if (*temp1 == '\0')
		return -1;
	else
		return 1;
}


int main() {
	char string1[100], string2[100];

	while (1) {
		printf("Enter string 1.\n");
		gets(string1);
		if (strcmp(string1, "quit") == 0)
			break;

		printf("Enter string 2.\n");
		gets(string2);
		if (strcmp(string2, "quit") == 0)
			break;
		printf("Result of strcmp(str1, str2) is %d.\n", my_strcmp(string1, string2));
	}
	return 0;
}