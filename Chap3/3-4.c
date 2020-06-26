#include <stdio.h>
int main() {
	int s;
	int m;
	int h;

	printf("Enter seconds.\n");
	scanf("%d", &s);

	h = s/ 3600;
	m= (s % 3600) / 60;
	s= (s % 3600) % 60;

	printf("It is %d hours, %d minutes, %d seconds.\n", h, m, s);
	return 0;
}