/*�� ���α׷��� ó���� �ε� �Ҽ� �������� ���� �������� ��� �Ŀ� ���� ���α׷��� �����Ѵ�.*/

#include<stdio.h>// C ǥ�� ���̺귯�� �� �ϳ��� stdio.h ��� ��� ���Ͽ� ����� ������ �����Ѵٴ� ��
int int_calculate(int a, char b, int c);//���� ���� 
int float_calculate(float a, char b, float c);//�ε� �Ҽ� ����

int int_calculate(int a, char b, int c) {
	if (b == '+') {
		return a + c;
	}
	else if (b == '-') {
		return a - c;
	}
	else if (b == '/') {
		return a / c;
	}
	else if (b == '*') {
		return a * c;
	}
	else if (b == '%') {
		return a % c;
	}
}

//�ε� �Ҽ� ����
int float_calculate(float a, char b, float c) {
	if (b == '+') {
		return a + c;
	}
	else if (b == '-') {
		return a - c;
	}
	else if (b == '/') {
		return a / c;
	}
	else if (b == '*') {
		return a * c;
	}
}

int main() {// �Է� ���� main �Լ��� ȣ���Ͽ� ���������� ��� , �ü���� ���α׷��� ���������� ����Ǿ������� Ȯ���ϱ� ����
	int num, in_1, in_2, re_i;
	float f_1, f_2, re_f;
	char oper;
	
	printf("Enter 1 for floating point calculation, 2 for integer calculation.\n");// ���� ���
	scanf("%d", &num);// �Է� �ޱ�

	if (num == 1) { //�ε� �Ҽ� ���� �̸�
		printf("Enter an expression. For EXAMPLE, 2.0 + 5.0.\n");// ���� ���
		scanf("%lf %c %lf", &f_1, &oper, &f_2);// �Է� �ޱ�
		re_f = float_calculate(f_1, oper, f_2);//�ε��Ҽ��� ��� ��� �Լ� �ҷ�����
		printf("%d %c %d = &lf", &f_1, &oper, &f_2, &re_f); // ���� ���
	}
	else if (num = 2) { //���� ���� �̸�
		printf("Enter an expression. For EXAMPLE, 2 + 5.\n"); // ���� ���
		scanf("%d %c %d", &in_1, &oper, &in_2);// �Է� �ޱ�
		re_i = int_calculate(in_1, oper, in_2);//������ ��� ��� �Լ� �ҷ�����
		printf("%d %c %d = %d.", in_1, oper, in_2, re_i); // ���� ���
	}
	return 0; // �ش� �Լ��� ���������� ������ �ü������ ����� ���� ��ȯ�ϰ� ���� �Լ��� ����� ����
}