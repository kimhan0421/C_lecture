/*2진 파일 쓰기-3명의 학생 정보를 입력받아 2진파일로 출력*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

typedef struct {//구조체 타입 정의
	int id;
	char name[20];
}sType;

int main() {
	int i, cnt;
	sType arr[MAX];//배열 선언

	FILE* dest = fopen("student.bin", "wb");//이진 파일 연다 이때 확장자는 .bin이다
	if (dest == NULL) {
		fprintf(stderr, "Error opening ouput file.\n");
		exit(1);
	}
	for (i = 0; i < MAX; i++) {//멤버 변수 값 입력받음
		printf("Enter id, name.\n");
		scanf("%d%s", &(arr[i]), arr[i].name);
	}
	for (i = 0; i < MAX; i++) {
		cnt = fwrite((void*)&arr[i], sizeof(sType), 1, dest);//루프 돌때마다 구조체 하나 출력
		if (cnt < 1) {//구조체 하나 출력할때마다 개수 카운트
			fprintf(stderr, "Error while writing a structure.\n");
			exit(1);
		}
	}
	fclose(dest);
	return 0;
}