#define MAX 15
#include <stdio.h>

main() {
	char ch, str[MAX];
	int i;
	printf("Enter a sentence to reverse.\n");
	for (i = 0; (ch = getchar()) != '\n'; i++) { //����Ű ������ ������ �Է¹��� ���ڸ� �迭�� ����
		str[i] = ch;
	}
	str[i] = '\0';// str�迭�� �������� ��Ÿ���� ����
	for (--i; i >= 0; i--) {//�������� ���. --i�� �ε����� \0���� ������ ����
		putchar(str[i]);
	}
	return 0;
}