/*�Է� ���ڿ��� �о� �������� ����ϴ� ���α׷�*/
#include <stdio.h>

void reverse_it() {
	char ch;
	scanf("%c", &ch);
	if (ch == '\n') { return;	} // ���̽� ���̽�
	else {
		reverse_it(); //�Ӹ����
		printf("%c",ch);//'\n'�� �������� �����
	}
	/* ó������ �о����� ���̽����̽��κ��� �������� �ǵ��ư��鼭 ��� ������ 
	�Էµ� ������ �������� �����.*/
}

int main() {
	printf("Enter a sentence.\n");
	reverse_it();
	printf("\n");
	return 0;
	
}