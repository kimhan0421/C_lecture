/*두 좌표 사이의 거리를 계산한다.*/
#include <stdio.h>
#include <math.h>

int main() {
	double x1, y1, x2, y2, distance; //점p와 점q의 좌표, 거리를 double형으로 선언한다.

	printf("Enter the coordinates of point p.\n");
	scanf("%lf%lf", &x1, &y1);//점p를 입력받는다
	printf("Enter the coordinates of point q.\n");
	scanf("%lf%lf", &x2, &y2);//점q를 입력받는다

	distance = sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)); //제곱근을 구한다.

	printf("Distance between the points is %lf.", distance);
	return 0;//int로 타입을 맞춘 것을 리턴한다.
}

