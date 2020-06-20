#include <stdio.h>
#include <string.h>

int my_s(const char *s1, const char *s2) {
	const char* temp1 = s1;
	const char* temp2 = s2;

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
	char str1[100], str2[100];

	while (1) {
		printf("Enter string 1.\n");
		gets(str1);
		if (strcmp(str1, "quit") == 0)
			break;

		printf("Enter string 2.\n");
		gets(str2);
		if (strcmp(str2, "quit") == 0)
			break;
		printf("Result of strcmp(str1, str2) is %d.\n", my_s(str1, str2));
	}
	return 0;
}
