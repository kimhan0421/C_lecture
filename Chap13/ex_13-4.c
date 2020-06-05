/*구조체 멤버 변수로 사용된 포인터*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct employee {
	char* name;
	int resident_no;
};

int main() {
	struct employee seller, *p;

	p = &seller;
	p->name = "Jay Kim"; //상수메모리여서 할당 가능
	puts(p->name);

	p->name = (char*)malloc(sizeof(char) * 40); //동메모리 할당

	if (p->name == NULL) {
		printf("No more memory.\n");
		exit(1);
	}
	strcpy(p->name, "Jay Lee");
	puts(p->name);
	free(p->name);
	return 0;
}
