/*문자가 알파벳, 숫자, 그외인지 세가지로 구분하는 프로그램.*/
#include <stdio.h> // C 표준 라이브러리 중 하나인 stdio.h 라는 헤더 파일에 선언된 내용을 포함한다는 뜻
int main() {// 입력 없이 main 함수를 호출하여 정수형으로 출력 , 운영체제가 프로그램이 정상적으로 종료되었는지를 확인하기 위함
	char ch;//문자형 변수 선언
	printf("Enter a character.\n");//문장 출력
	scanf("%c",&ch);// 입력 받기
	if (ch >='A' && ch <='z' ) {//문자가 알파벳인 경우
		printf("It is a alphabet.\n");//문장 출력
	}
	else if (ch >='0' && ch <='9') {//문자가 숫자인 경우
		printf("It is a digit.\n");//문장 출력
	}
	else {//문자가 그외인 경우
		printf("It is neither an alphabet nor a  digit.\n ");//문장 출력
	}
	return 0; // 해당 함수를 정상적으로 끝내고 운영체제에게 기술한 값을 반환하고 현재 함수를 벗어나기 위함
}