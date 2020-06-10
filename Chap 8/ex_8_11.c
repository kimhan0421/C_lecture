/*linline함수 사용*/
#include <stdio.h>

inline int add(int a, int b) {
	return (a + b);
}

int main() {
	int sum, first = 10, second = 20;
	sum = add(first, second); // add함수를 참고해 (first + second)로 치환
	printf("sum is %d.\n", sum);
	return 0;
}