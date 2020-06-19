#define MAX 15
#include <stdio.h>

main() {
	char ch, str[MAX];
	int i;
	printf("Enter a sentence to reverse.\n");
	for (i = 0; (ch = getchar()) != '\n'; i++) { //엔터키 들어오기 전까지 입력받은 문자를 배열에 저장
		str[i] = ch;
	}
	str[i] = '\0';// str배열이 문자임을 나타내기 위함
	for (--i; i >= 0; i--) {//역순으로 출력. --i는 인덱스를 \0으로 돌리기 위함
		putchar(str[i]);
	}
	return 0;
}