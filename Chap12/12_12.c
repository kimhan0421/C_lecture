/*quit입력전까지 단어를 입력받아 2차원 동적배열에 저장한 뒤 
그동안 입력된 단어를 출력하는 프로그램*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char** p = NULL, word[100];
	int i, row = 0; // row는 행 번호(0,1,2...)
	while (1) {
		printf("Enter a word.\n");
		gets(word);
		if (strcmp(word, "quit") == 0) { // quit가 입력되면 루프를 빠져나감
			break;
		}
		p = realloc(p, (row + 1) * sizeof(char *)); //realloc, row를 써서 단어가 들어올 때마다 행의 수 증가
		if (p == NULL) { //널 테스트
			exit(1); //널이면 exit로 빠져나감
		}
		p[row] = (char *)malloc((strlen(word) + 1) * sizeof(char));
		//alloc을 써서 p[row]가 단어 크기만큼의 동적 메모리를 가리키게 함
		if (p[row] == NULL) { //널 테스트
			exit(1); // 널이면 exit로 빠져나감
		}
		strcpy(p[row], word);		// word를 p[row]로 복사    
		row++;
	}
	for (i = 0; i < row; i++) {// 루프를 돌면서 p[i]가 가리키는 것을 출력   
		puts(p[i]);
	}
	printf("\n");						// 개행  

	for (i = 0; i < row; i++) {	// 루프를 돌면서 p[i]가 가리키는 공간 반납  
		free(p[i]);
	}
	free(p);								// p가 가리키던 포인터 배열 공간 반납  
	return 0;

}
