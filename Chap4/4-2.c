/*�� ��ǥ ������ �Ÿ��� ����Ѵ�.*/
#include <stdio.h>
#include <math.h>

int main() {
	double x1, y1, x2, y2, distance; //��p�� ��q�� ��ǥ, �Ÿ��� double������ �����Ѵ�.

	printf("Enter the coordinates of point p.\n");
	scanf("%lf%lf", &x1, &y1);//��p�� �Է¹޴´�
	printf("Enter the coordinates of point q.\n");
	scanf("%lf%lf", &x2, &y2);//��q�� �Է¹޴´�

	distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)); //�������� ���Ѵ�.

	printf("Distance between the points is %lf.", distance);
	return 0;//int�� Ÿ���� ���� ���� �����Ѵ�.
}

