/*재귀호출 없애고 작성*/
#include <stdio.h>

/*
void recurse(int n) {
	if (n > 10) {
		return;
	}
	printf("%d.\n",n);
	recurse(n + 1);
}*/

void recurse(int n) {
	for (int i = n; i <= 10; i++) { 
		printf("%d.\n", i);
	}
}
int main() {
	int num;
	printf("Enter a natural number.\n");
	scanf("%d", &num);
	recurse(num);
	return 0;
}