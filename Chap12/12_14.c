/*�Է������� ���ڿ� ���·� str �迭�� ������ �� �� �迭�� �ٽ� �о� arr�̶�� �����迭�� �����ϴ� ���α׷�*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char ch, *str, *ptr;
	int i, j;
	int* arr; //�����迭

	printf("Enter one or more integers.\n");
	str = NULL; // ���� ���ڿ��� ����Ű�� str �����͸� NULL�� �ʱ�ȭ
	for (i = 0; (ch = getchar()) != '\n'; i++) {//���� ���ڰ� '\n'�� �ƴ� ������
		str = (char*)realloc(str, (i + 1) * sizeof(char)); // realloc�� ���� str�� (i + 1)���� ���ڸ� �����ϴ� ������ �Ҵ�
		str[i] = ch; // str[i]�� ���� ���ڸ� ����
	}
	str[i] = ' '; // '\n' �ڸ��� ' '�� ������
	str[i + 1] = '\n'; // �� �������� '\n'�� �߰�. 

	//str�� ����Ű�� ���ڿ����� ' '�� ��� '\0'���� ġȯ�ϱ� ����
	//strtok �Լ��� ȣ��.
	//'\n'�ڸ��� ''�� ������ ������ ������ ���ڿ� ���� �� ���ڸ� �����ϱ� ����
	ptr = strtok(str, " ");
	while (ptr != NULL) { // strtok�� ���� ���� NULL�� �ƴ� ������
		ptr = strtok(NULL, " ");// ptr�� strtok�� ���� ���� ����
	}

	ptr = str; // ptr�� str�� �ʱ�ȭ
	arr = NULL; // ���� �迭 arr�� NULL�� �ʱ�ȭ
	for (i = 0; *ptr != '\n'; i++) {
		arr = (int*)realloc(arr, (i + 1) * sizeof(int)); // realloc�� ���� arr�� (i + 1)���� ������ �����ϴ� ������ �Ҵ�
		arr[i] = atoi(ptr); // atoi�� ���� ptr�� ����Ű�� ���ڿ��� ������ ��ȯ�Ͽ� arr[i]�� ���� 
		while (*ptr != '\0') {// ptr�� str �迭�� ���� ���ڿ��� ����Ű�� �ؾ� ��
			ptr++; 
		}
		ptr++;
	}
	for (j = 0; j < i; j++) { // arr �迭�� ����ض�
		printf("%d ", arr[j]);
	}
	printf("\n");

	return 0;
}
