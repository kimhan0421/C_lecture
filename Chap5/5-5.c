/*정수형 좌표p값을 입력받아 그 점이 속한 4분면을 출력하는 프로그램*/

#include <stdio.h>//C 표준 라이브러리 중 하나인 stdio.h 라는 헤더 파일에 선언된 내용을 포함한다는 뜻


int main(void) {// 입력 없이 main 함수를 호출하여 정수형으로 출력 , 운영체제가 프로그램이 정상적으로 종료되었는지를 확인하기 위함
	int x, y;// 정수형 변수 선언
	printf("Enter the x, y coordinates of the point.\n");// 문장 출력
	scanf("%d %d", &x, &y);// 입력 받기

	(x > 0 && y > 0) ? printf("It's in the 1th quadrant.") : printf("");//제1사분면 일 경우 출력
	(x < 0 && y > 0) ? printf("It's in the 2th quadrant.") : printf("");//제2사분면 일 경우 출력
	(x < 0 && y < 0) ? printf("It's in the 3th quadrant.") : printf("");//제3사분면 일 경우 출력
	(x > 0 && y < 0) ? printf("It's in the 4th quadrant.") : printf("");//제4사분면 일 경우 출력
	return 0;// // 해당 함수를 정상적으로 끝내고 운영체제에게 기술한 값을 반환하고 현재 함수를 벗어나기 위함
}