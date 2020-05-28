/*아이디 만드는 프로그램
1)알파벳 소문자로 시작
2)반드시 숫자가 하나 이상 들어가야
3) 최대 8자리*/
#include <stdio.h>

int main() {
	int first = 1, num = 0, len = 0, legal = 1;
	char ch1;
	printf("Enter an identifier.\n");
	while (1) {
		scanf("%c", &ch1);

		if (ch1 == '\n') {
			break;
		}

		// 첫 번째 규칙
		if (first) {//알파벳 소문자 인가를 판별
			if (ch1 < 97 || ch1 > 122) {
				legal = 0;
				break;
			}
			else {
				first = 0;
				len++;
				continue;
			}
		}
		else if (ch1 >= 48 && ch1 < 58) {  // 두 번째 규칙 ) 반드시 숫자가 하나이상 들어가야
			if (num == 0) num++; //숫자가 있을때
			len++;
		}
		else {
			len++;
		}
	}

	// 최대자리가 8자리
	if (legal && num > 0 && len <= 8) {
		printf("It's a legal ID.\n");
	}
	else {
		printf("It's a illegal ID.\n");
	}
	return 0;
}