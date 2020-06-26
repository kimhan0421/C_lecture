/* 알파벳 소문자를 대문자로 변환하는 함수를 작성 하고 호출하는 프로그램이다.*/
#include <stdio.h>
char to_upper_case(char ch);//알파벳 소문자를 대문자로 변환하는 함수이다.

char to_upper_case(char ch) {
	char up;
	up = ch - ('a' - 'A');//소문자를 대문자로 변환한다.
	return up;
}

int main() {
	char low;
	printf("알파벳 소문자를 입력하세요.\n");
	scanf("%c", &low);//소문자를 입력받는다.
	printf("소문자 %c의 대문자는 %c입니다.\n", low, to_upper_case(low));//to_upper_case를 부른다.
	return 0;
}