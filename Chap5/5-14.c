/*이 프로그램은 처음에 부동 소수 연산인지 정수 연산인지 물어본 후에 계산기 프로그램을 실행한다.*/

#include<stdio.h>// C 표준 라이브러리 중 하나인 stdio.h 라는 헤더 파일에 선언된 내용을 포함한다는 뜻
int int_calculate(int a, char b, int c);//정수 연산 
int float_calculate(float a, char b, float c);//부동 소수 연산

int int_calculate(int a, char b, int c) {
	if (b == '+') {
		return a + c;
	}
	else if (b == '-') {
		return a - c;
	}
	else if (b == '/') {
		return a / c;
	}
	else if (b == '*') {
		return a * c;
	}
	else if (b == '%') {
		return a % c;
	}
}

//부동 소수 연산
int float_calculate(float a, char b, float c) {
	if (b == '+') {
		return a + c;
	}
	else if (b == '-') {
		return a - c;
	}
	else if (b == '/') {
		return a / c;
	}
	else if (b == '*') {
		return a * c;
	}
}

int main() {// 입력 없이 main 함수를 호출하여 정수형으로 출력 , 운영체제가 프로그램이 정상적으로 종료되었는지를 확인하기 위함
	int num, in_1, in_2, re_i;
	float f_1, f_2, re_f;
	char oper;
	
	printf("Enter 1 for floating point calculation, 2 for integer calculation.\n");// 문장 출력
	scanf("%d", &num);// 입력 받기

	if (num == 1) { //부동 소수 연산 이면
		printf("Enter an expression. For EXAMPLE, 2.0 + 5.0.\n");// 문장 출력
		scanf("%lf %c %lf", &f_1, &oper, &f_2);// 입력 받기
		re_f = float_calculate(f_1, oper, f_2);//부동소수형 계산 결과 함수 불러오기
		printf("%d %c %d = &lf", &f_1, &oper, &f_2, &re_f); // 문장 출력
	}
	else if (num = 2) { //정수 연산 이면
		printf("Enter an expression. For EXAMPLE, 2 + 5.\n"); // 문장 출력
		scanf("%d %c %d", &in_1, &oper, &in_2);// 입력 받기
		re_i = int_calculate(in_1, oper, in_2);//정수형 계산 결과 함수 불러오기
		printf("%d %c %d = %d.", in_1, oper, in_2, re_i); // 문장 출력
	}
	return 0; // 해당 함수를 정상적으로 끝내고 운영체제에게 기술한 값을 반환하고 현재 함수를 벗어나기 위함
}