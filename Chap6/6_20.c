/*���̵� ����� ���α׷�
1)���ĺ� �ҹ��ڷ� ����
2)�ݵ�� ���ڰ� �ϳ� �̻� ����
3) �ִ� 8�ڸ�*/
#include <stdio.h>

int main() {
	int first = 1, num = 0, len = 0, legal = 1;
	char ch1;
	printf("Enter an identifier.\n");
	while (1) {
		scanf("%c", &ch1);

		if (ch1 == '\n') {
			break;
		}

		// ù ��° ��Ģ
		if (first) {//���ĺ� �ҹ��� �ΰ��� �Ǻ�
			if (ch1 < 97 || ch1 > 122) {
				legal = 0;
				break;
			}
			else {
				first = 0;
				len++;
				continue;
			}
		}
		else if (ch1 >= 48 && ch1 < 58) {  // �� ��° ��Ģ ) �ݵ�� ���ڰ� �ϳ��̻� ����
			if (num == 0) num++; //���ڰ� ������
			len++;
		}
		else {
			len++;
		}
	}

	// �ִ��ڸ��� 8�ڸ�
	if (legal && num > 0 && len <= 8) {
		printf("It's a legal ID.\n");
	}
	else {
		printf("It's a illegal ID.\n");
	}
	return 0;
}