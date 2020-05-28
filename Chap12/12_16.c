/*�ѱ۹����� �Է¹޾� �װ��� ȸ������ �Ǵ��ϴ� ���α׷�*/
#include <stdio.h>
#include <string.h>

int k_palindrome(const char *string) { // ���� �ȿ� �ѱ��� ȸ�������� �Ǵ��ϴ� �Լ�
	char *temp = string;

	int first = 0; //first�� 0���� �ʱ�ȭ
	int last = (int)strlen(temp) - 1; // last�� �迭 ������ �ʱ�ȭ
	while (first < last) { // �����Ҷ����� ��Ī ��ġ�� ���ڸ� ��
		if (temp[first] >= 32 && temp[first] <= 47) {
			first++;
			continue;
		}
		if (temp[last] >= 32 && temp[last] <= 47) {
			last--;
			continue;
		}
		if (temp[first] == temp[last - 1] && temp[first + 1] == temp[last]) {// �ѱ��� 2����Ʈ�� ���ϱ� �ε��� 2ĭ�� ������.
			first += 2; //2ĭ������
			last -= 2; //2ĭ�� ����
		}
		else // ȸ���� �ƴ� ���
			return 0;
	}
	return 1;// ȸ���̶�� ��
}


int main() {
	char string[100];

	while (1) {
		printf("�ѱ� ������ �Է��ϼ���.\n");
		gets(string);
		if (strcmp(string, "quit") == 0)//"quit"�Է¹����� ������ ������
			break;
		if (k_palindrome(string)) {
			printf("��. ȸ���Դϴ�.\n");
		}			
		else {
			printf("ȸ���� �ƴմϴ�.\n");
		}
			
	}
	return 0;
}