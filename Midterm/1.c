#include <stdio.h>

int main() {
	int n, sum = 0;
	int num = 9; 
	printf("Enter the number of terms.\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += num;
		num = num * 10 + 9; 
	}
	printf("The sum is %d.", sum);
	return 0;
}