/*��������� ������ �϶� ����ü ���� -����*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {//����� ����
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
	//b.name�� �޸𸮸� �Ҵ����ָ� �ٸ��� ��µ�
	strcpy(b.name, "Hong");

	printf("%d %s %s\n", a.entry_year, a.residence, a.name);
	printf("%d %s %s\n", b.entry_year, b.residence, b.name);//a.name�� b.name �� ���� ���
}