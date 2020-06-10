/*입력 문자열을 읽어 역순으로 출력하는 프로그램*/
#include <stdio.h>

void reverse_it() {
	char ch;
	scanf("%c", &ch);
	if (ch == '\n') { return;	} // 베이스 케이스
	else {
		reverse_it(); //머리재귀
		printf("%c",ch);//'\n'로 빠져나와 실행됨
	}
	/* 처음부터 읽었으나 베이스케이스로부터 빠져나와 되돌아가면서 찍기 때문에 
	입력된 문장의 역순으로 출력함.*/
}

int main() {
	printf("Enter a sentence.\n");
	reverse_it();
	printf("\n");
	return 0;
	
}