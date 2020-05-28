/*한글문장을 입력받아 그것이 회문인지 판단하는 프로그램*/
#include <stdio.h>
#include <string.h>

int k_palindrome(const char *string) { // 문장 안에 한글이 회문인지를 판단하는 함수
	char *temp = string;

	int first = 0; //first를 0으로 초기화
	int last = (int)strlen(temp) - 1; // last를 배열 끝으로 초기화
	while (first < last) { // 교차할때까지 대칭 위치의 문자를 비교
		if (temp[first] >= 32 && temp[first] <= 47) {
			first++;
			continue;
		}
		if (temp[last] >= 32 && temp[last] <= 47) {
			last--;
			continue;
		}
		if (temp[first] == temp[last - 1] && temp[first + 1] == temp[last]) {// 한글은 2바이트를 쓰니까 인덱스 2칸씩 움직임.
			first += 2; //2칸씩전진
			last -= 2; //2칸씩 후퇴
		}
		else // 회문이 아닌 경우
			return 0;
	}
	return 1;// 회문이라는 뜻
}


int main() {
	char string[100];

	while (1) {
		printf("한글 문장을 입력하세요.\n");
		gets(string);
		if (strcmp(string, "quit") == 0)//"quit"입력받으면 루프문 나오기
			break;
		if (k_palindrome(string)) {
			printf("네. 회문입니다.\n");
		}			
		else {
			printf("회문이 아닙니다.\n");
		}
			
	}
	return 0;
}