/*��Ʈ�������� ¦���� Ȧ���� �Ǵ��ϴ� ���α׷�*/
#include <stdio.h> // C ǥ�� ���̺귯�� �� �ϳ��� stdio.h ��� ��� ���Ͽ� ����� ������ �����Ѵٴ� ��
int main() {// �Է� ���� main �Լ��� ȣ���Ͽ� ���������� ��� , �ü���� ���α׷��� ���������� ����Ǿ������� Ȯ���ϱ� ����
	int bit; // �Ǽ��� ���� ����
	printf("Enter an integer.\n"); // ���� ���
	scanf("%d", &bit); // �Է� �ޱ�
	if (bit & 1 == 1) {//Ȧ�� �϶�
		printf("It is an odd number.\n");// ���� ���
	}
	else {//¦�� �϶�
		printf("It is an even number.\n");// ���� ���
	}
	return 0; // �ش� �Լ��� ���������� ������ �ü������ ����� ���� ��ȯ�ϰ� ���� �Լ��� ����� ����
}