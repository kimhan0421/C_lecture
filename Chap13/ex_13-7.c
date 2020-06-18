/*멤버변수가 포인터 일때 구조체 복사 -주의*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {//사원의 정보
	int entry_year;
	char residence[6];
	char* name;
};

int main() {
	struct employee a = { 2019,"Seoul",NULL };
	struct employee b;

	a.name = (char*)malloc(5 * sizeof(char));
	strcpy(a.name, "KIM");

	b = a;
	//b.name = (char*)malloc(5 * sizeof(char)); 
	//b.name에 메모리를 할당해주면 다르게 출력됨
	strcpy(b.name, "Hong");

	printf("%d %s %s\n", a.entry_year, a.residence, a.name);
	printf("%d %s %s\n", b.entry_year, b.residence, b.name);//a.name과 b.name 이 같은 결과
}