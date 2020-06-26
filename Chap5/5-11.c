/*윤년 계산하는 프로그램*/
#include <stdio.h> // C 표준 라이브러리 중 하나인 stdio.h 라는 헤더 파일에 선언된 내용을 포함한다는 뜻
int leap_year(int y);//윤년 계산하는 함수

int leap_year(int y) {
	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0)) {//윤년일 경우
		printf("It is a leap year.\n");// 문장 출력
	}
	else {//윤년이 아닐 경우
		printf("It is not a leap year.\n");// 문장 출력
	}
}
int main() {// 입력 없이 main 함수를 호출하여 정수형으로 출력 , 운영체제가 프로그램이 정상적으로 종료되었는지를 확인하기 위함
	int year;//정수형 변수 선언
	printf("Enter year.\n"); // 문장 출력
	scanf("%d", &year); // 입력 받기
	leap_year(year);//윤년 계산한 함수 부르기
	return 0; // 해당 함수를 정상적으로 끝내고 운영체제에게 기술한 값을 반환하고 현재 함수를 벗어나기 위함
}