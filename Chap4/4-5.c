/*ǥ�غ����� ����ϴ� ���α׷��̴�.*/
#include <stdio.h>
#include <math.h>
double average(double a, double b, double c);//�� ���� ����� ���ϴ� �Լ��̴�.
double std_deviation(double a, double b, double c);//ǥ�������� ����ϴ� �Լ��̴�.

double average(double a, double b, double c) {
	double ave = (a + b + c) / 3.0;//����� ����Ѵ�.
	return ave;
}

double std_deviation(double a, double b, double c) {
	double aver, vari;
	aver = average(a, b, c);//average�Լ��� ȣ���Ѵ�.
	vari = ((a - aver)*(a - aver) + (b - aver)*(b - aver) + (c - aver)*(c - aver)) / 3; //���̸� ����Ѵ�.
	return(sqrt(vari));//math.h�� ���ǵ� sqrt�Լ��� �ҷ� ǥ�������� �����Ѵ�.
}

int main() {
	double a, b, c;
	printf("Enter a three real numbers.\n");
	scanf("%lf%lf%lf", &a, &b, &c);//���� ������ �Է¹޴´�.
	printf("The standard deviation is %lf.\n", std_deviation(a, b, c));//�Լ� std_deviation�� ȣ���� ǥ�������� ����Ѵ�.
	return 0;
}