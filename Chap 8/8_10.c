/*��������a,b�� �Է¹޾� a�� b���� ����ϴ� ���α׷�*/
#include <stdio.h>

int power(int a, int b) {
	if (b == 0) {
		return 1;
	}
	else {
		return a * power(a, b - 1);
	}
}

int main() {
	int x, y;
	printf("Enter base and multiplier.\n");
	scanf("%d %d", &x,&y);
	printf("%d to the power of %d is %d",x, y, power(x,y));
	return 0;
}