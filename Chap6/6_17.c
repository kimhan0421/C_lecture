/*��ġ�� in�� ������ ���� ���*/
#include <stdio.h>

int main() {
	int ch, state = 0, count = 0;

	printf("Enter a sentence.\n");
	for (ch = getchar(); ch != '\n'; ch = getchar()) {
		switch (state) {//switch���� ���º��� �ؾ��� �� ���
		case 0://�����¿� �о���� 
			if (ch == 'i') {//���� 'i'�� 
				state = 1;//���� 1�� �Ű���
			}
			break;
		case 1://i�� �Էµ� ���¿���
			if (ch == 'n') {//n�� �ԷµǸ�
				state = 2;//���� 2�� �Ű���
			}
			else {
				state = 0;
			}
			break;
		case 2://i,n�� �Էµ� ���¿���
			if (ch == ' ') {//��ġ�� �ڿ��� ���鸸 �;� ��ġ��� �����Ǳ� ������ ������ �ԷµǸ�
				state = 3;//���� 3���� �Ű���
			}
			else {
				state = 0;
			}
			break;
		case 3:
			count++;//��ġ�� ������ ����.
			state = 0;//���� 0���� �Ű���

		defalut:
			break;
		}
	}
	printf("The preposition 'in' appears %d times.\n", count);
	putchar('\n');
	return 0;
}