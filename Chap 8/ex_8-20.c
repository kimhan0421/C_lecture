/*문자열을 읽어 역순으로 출력하는 프로그램*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse_it() {
	char ch;
	scanf("%c", &ch);
	if (ch == '\n') { return; } //Base case
	else{
		reverse_it();//머리재귀이므로 아무 일도 하지 않고 재귀 호출하면서 다음문자 읽음
		printf("%c", ch);//찍는 것은 베이스 케이스로부터 빠져나와 되돌아 가면서 찍어서 역순으로 출력됨.
	}
}

int main() {
	printf("Enter a sentence.\n");
	reverse_it();
	printf("\n");
	return 0;
}