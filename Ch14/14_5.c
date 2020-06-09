/* 입력 문자를 씨저 사이퍼를 사용한 프로그램*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	char ch; int key, count;

	FILE* fp = fopen("encrypt.bin", "w+b");// encrypt.bin 파일. 쓰고 읽기 모드
	if (fp == NULL) {// 널 테스트
		fprintf(stderr, "Error while reading.");// fprintf(stderr) 오류 메세지
		exit(1);// exit
	}

	printf("Enter key.\n");
	scanf("%d", &key);	// key 값을 입력 받음
	while (getchar() != '\n');// 입력 버퍼 클리어
	printf("Enter texts to encrypt.\n");
	while ((ch = getchar()) != '\n') {// '\n' 이 아닐 때까지
		ch = (ch + key) % 128;	// 아스키 범위를 벗어나면 wrap around
		count = fwrite(&ch, sizeof(ch), 1, fp);// 2진 파일로 쓰기
		if (count < 1) {// count가 1보다 작으면
			fprintf(stderr, "Error whle writing."); // 오류메세지
			exit(1);// exit
		}
	}

	fseek(fp, 0, SEEK_SET);// 읽기 모드를 위해 위치 포인터를 파일 처음으로 되돌림
	while (fread(&ch, sizeof(ch), 1, fp)) {// 2진 파일 읽기. ch로 읽어들임
		ch = ch - key;// 원래 문자 복원
		if (ch < 0) { ch += 128; }// 아스키 범위를 벗어나면 wrap around
		printf("%c", ch);// ch를 화면에 출력
	}
	if (!feof(fp)) {// 파일 끝이 아니면 오류 메시지
		fprintf(stderr, "Error occurs.");
		exit(1);
	}
	fclose(fp);	// 파일 닫기
	return 0;
}