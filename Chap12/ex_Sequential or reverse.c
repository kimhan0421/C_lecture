/*������ �ѱ��� ���� ������ �Է¹޾�
������� Ȥ�� �Ųٷ� ���*/

#include <stdio.h>
#include <string.h>

int main() {
	int i;
	unsigned char str[40];

	printf("Enter a mixture of Koean and English.\n");
	gets(str);
	puts(str);//������� ���

	for (i = 0; i < (int)strlen(str); i++) {//������� ���
		printf("%c", str[i]);
	}
	printf("\n");

	/*�ε����� �ڿ��� ������ �̵�*/
	for (i = (int)strlen(str) - 1; i >= 0;) {
		if (str[i] >= 0 && str[i] <= 127) {//��������
			printf("%c", str[i]);
			i--;//c->b�� ��
		}
		/*�����ڵ�� ����*/
		else {//�ѱ��̸�
			printf("%c", str[i - 1]);
			printf("%c", str[i]);
			i -= 2;
		}
	}
	printf("\n");
	return 0;
}