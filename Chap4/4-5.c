/*표준변차를 계산하는 프로그램이다.*/
#include <stdio.h>
#include <math.h>
double average(double a, double b, double c);//세 수의 평균을 구하는 함수이다.
double std_deviation(double a, double b, double c);//표준편차를 계산하는 함수이다.

double average(double a, double b, double c) {
	double ave = (a + b + c) / 3.0;//평균을 계산한다.
	return ave;
}

double std_deviation(double a, double b, double c) {
	double aver, vari;
	aver = average(a, b, c);//average함수를 호출한다.
	vari = ((a - aver)*(a - aver) + (b - aver)*(b - aver) + (c - aver)*(c - aver)) / 3; //변이를 계산한다.
	return(sqrt(vari));//math.h에 정의된 sqrt함수를 불러 표준편차를 리턴한다.
}

int main() {
	double a, b, c;
	printf("Enter a three real numbers.\n");
	scanf("%lf%lf%lf", &a, &b, &c);//변수 세개를 입력받는다.
	printf("The standard deviation is %lf.\n", std_deviation(a, b, c));//함수 std_deviation를 호출해 표준편차를 출력한다.
	return 0;
}