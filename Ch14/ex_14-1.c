/*문자단위로 from.txt파일 읽어 to.txt파일로 복사하는 프로그램*/
#define _CRT_SECURE_NO_WARNINGS
//#define EOF -1 => ch를 int형으로 해야 하는 이유
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ch;//xh를 int형으로 선언
	FILE *f = fopen("from.txt","rt");
	FILE *t = fopen("to.txt", "wt");

	if (f == NULL || t == NULL) {
		printf("Error\n");
		exit(1);
	}
	while ((ch = fgetc(f)) != EOF) {//하나의 글자가 ch로 들어감.에러나도 EOF로 리턴
		fputc(ch, t);//to.txt로 들어감
	}

	if (feof(f)) { printf("Copy Okay\n"); } //실제 EOF파일 테스트
	else{ printf("Copy Error\n"); }
	fclose(f);
	fclose(t);
	return 0;
}
/*EOF는 파일끝 혹은 error 둘 다 리턴되기 때문에,
실제 EOF파일 로 테스트 해야 한다.*/