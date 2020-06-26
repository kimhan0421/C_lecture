/*반올림하는 프로그램이다.*/
#include <stdio.h>
#include <math.h>
double round_up(double n);//양의실수를 반올림한 값을 돌려주는 함수이다.

double round_up(double n) {
	double m = floor(n + 0.5);//반올림 함수를 한다.
	return m;
}

int main() {
	double a;
	int b;
	printf("Enter a positive real number.\n");
	scanf("%lf", &a);//양의 실수를 입력받는다.
	b = (int)(round_up(a));//반올림한 값을 int형으로 변환한다.
	printf("The round up value is %d", b);//b를 출력한다.
	return 0;
}