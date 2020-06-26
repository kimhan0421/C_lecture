
#include <stdio.h>

int main() {
	float f = 0;	
	printf("Enter a real number.\n");
	scanf("%f", &f);	

	int d = (int)f;
	printf("%d", d);
	return 0;
}