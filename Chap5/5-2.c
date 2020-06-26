/*알파벳 소문자 받아 자음과 모음 나누는 프로그램이다.*/
#include <stdio.h> // C 표준 라이브러리 중 하나인 stdio.h 라는 헤더 파일에 선언된 내용을 포함한다는 뜻
int is_vowel(char c); //알파벳 소문자 받으면 자음과 모음 나누는 함수

int is_vowel(char c) {
	if (c >= 'A' && c <= 'Z') { //대문자를 받으면 소문자로 고친다.
		c += 32;
	}
	switch (c)//소문자들을 모음과 자음으로 나눈다.
	{
	case 'a': case'e':case'i':case'o':case'u':
		printf("Vowel\n");
		break;
	default:
		printf("Consonant\n");
		break;
	}
	return 0;
}

int main() {// 입력 없이 main 함수를 호출하여 정수형으로 출력 , 운영체제가 프로그램이 정상적으로 종료되었는지를 확인하기 위함
	char low;
	printf("Enter the one lower.\n"); // 문장 출력
	scanf("%c",&low);//알파벳 소문자 하나를 입력받는다.
	is_vowel(low);//앞에 정의한 함수를 불러온다.
	return 0;// 해당 함수를 정상적으로 끝내고 운영체제에게 기술한 값을 반환하고 현재 함수를 벗어나기 위함
}