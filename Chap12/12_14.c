/*입력정수를 문자열 형태로 str 배열에 저장한 후 그 배열을 다시 읽어 arr이라는 정수배열에 저장하는 프로그램*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char ch, *str, *ptr;
	int i, j;
	int* arr; //정수배열

	printf("Enter one or more integers.\n");
	str = NULL; // 동적 문자열을 가르키는 str 포인터를 NULL로 초기화
	for (i = 0; (ch = getchar()) != '\n'; i++) {//읽은 문자가 '\n'이 아닐 때까지
		str = (char*)realloc(str, (i + 1) * sizeof(char)); // realloc에 의해 str에 (i + 1)개의 문자를 저장하는 공간을 할당
		str[i] = ch; // str[i]에 읽은 문자를 대입
	}
	str[i] = ' '; // '\n' 자리에 ' '를 덧씌움
	str[i + 1] = '\n'; // 그 다음에에 '\n'을 추가. 

	//str이 가르키는 문자열에서 ' '를 모두 '\0'으로 치환하기 위해
	//strtok 함수를 호출.
	//'\n'자리에 ''를 덧씌운 이유도 마지막 문자열 끝에 널 문자를 삽입하기 위함
	ptr = strtok(str, " ");
	while (ptr != NULL) { // strtok의 리턴 값이 NULL이 아닐 때까지
		ptr = strtok(NULL, " ");// ptr에 strtok의 리턴 값을 대입
	}

	ptr = str; // ptr을 str로 초기화
	arr = NULL; // 정수 배열 arr을 NULL로 초기화
	for (i = 0; *ptr != '\n'; i++) {
		arr = (int*)realloc(arr, (i + 1) * sizeof(int)); // realloc에 의해 arr에 (i + 1)개의 정수를 저장하는 공간을 할당
		arr[i] = atoi(ptr); // atoi에 의해 ptr이 가리키는 문자열을 정수로 변환하여 arr[i]에 대입 
		while (*ptr != '\0') {// ptr이 str 배열의 다음 문자열을 가리키게 해야 함
			ptr++; 
		}
		ptr++;
	}
	for (j = 0; j < i; j++) { // arr 배열을 출력해라
		printf("%d ", arr[j]);
	}
	printf("\n");

	return 0;
}
