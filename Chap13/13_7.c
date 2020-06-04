/*3개의 관광지 정보를 출력하는 프로그램.*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

typedef struct {
	char* name;    // 관광지 이름 
	char rating;   // 등급: 'A', 'B', 'C'로 평가 
} siteType;

int main() {
	int i; char temp[100];
	siteType* sites[3];  //구조체를 가리키는 포인터 배열 
	for (i = 0; i < 3; i++) { // 3개의 관광지에 대한 공간만들기
		sites[i] = (siteType*)malloc(sizeof(siteType));
		// 포인터를 쓰려면 항상 가리키는 대상을 저장할 공간을 먼저 만들어야 함 
		if (sites[i] == NULL) { //널 테스트 
			exit(1);  //exit로 빠져나감 
		}
		printf("Enter name of tour site.\n");
		gets(temp);
		sites[i]->name = (char*)malloc((strlen(temp) + 1) * sizeof(char)); // 맨 끝에 널값 공간 +1하기
		// 포인터를 쓰려면 항상 가리키는 대상을 저장할 공간을 먼저 만들어야 함 
		if (sites[i]->name == NULL) {  //널 테스트 
			exit(1);
		}
		strcpy(sites[i]->name, temp);   //문자열 복사 
		printf("Enter rating of the tour site.A or B or C.\n"); // 입력은 A, B, C 중에 받는다고 한다.
		scanf("%c", &sites[i]->rating);   // 등급 입력받아 저장
		while (gets(temp) == NULL);   //입력 버퍼 클리어 
	}
	for (i = 0; i < 3; i++) { // 3개의 관광지에 정보 출력
		printf("%s %c\n", sites[i]->name, sites[i]->rating);
	}
	return 0;
}