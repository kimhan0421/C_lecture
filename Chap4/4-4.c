/* ���ĺ� �ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ��� �ۼ� �ϰ� ȣ���ϴ� ���α׷��̴�.*/
#include <stdio.h>
char to_upper_case(char ch);//���ĺ� �ҹ��ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ��̴�.

char to_upper_case(char ch) {
	char up;
	up = ch - ('a' - 'A');//�ҹ��ڸ� �빮�ڷ� ��ȯ�Ѵ�.
	return up;
}

int main() {
	char low;
	printf("���ĺ� �ҹ��ڸ� �Է��ϼ���.\n");
	scanf("%c", &low);//�ҹ��ڸ� �Է¹޴´�.
	printf("�ҹ��� %c�� �빮�ڴ� %c�Դϴ�.\n", low, to_upper_case(low));//to_upper_case�� �θ���.
	return 0;
}