/*2진 파일 읽기*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 3

typedef struct {
	int id;
	char name[20];
}sType;

int main() {
	int i, cnt = 0;
	sType arr[MAX];

	FILE* s;
	s = fopen("student.bin", "rb");
	if (s == NULL) {
		fprinf(stderr, "Error open\n");
		exit(1);
	}
	i = 0;
	while (fread((void*)&arr[i], sizeof(sType), 1, s)) { i++; }
	if (feof(s)) {
		printf("Read Okay\n");
	}
	else {
		printf("Error\n");
	}
	cnt = i;
	for (i = 0; i < cnt; i++) {
		printf("id:%d, name:%s,\n",arr[i].id,arr[i].name);
	}
	fclose(s);
	return 0;
}