/*���ڿ��� �о� �������� ����ϴ� ���α׷�*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverse_it() {
	char ch;
	scanf("%c", &ch);
	if (ch == '\n') { return; } //Base case
	else{
		reverse_it();//�Ӹ�����̹Ƿ� �ƹ� �ϵ� ���� �ʰ� ��� ȣ���ϸ鼭 �������� ����
		printf("%c", ch);//��� ���� ���̽� ���̽��κ��� �������� �ǵ��� ���鼭 �� �������� ��µ�.
	}
}

int main() {
	printf("Enter a sentence.\n");
	reverse_it();
	printf("\n");
	return 0;
}