/*������ ��ǥp���� �Է¹޾� �� ���� ���� 4�и��� ����ϴ� ���α׷�*/

#include <stdio.h>//C ǥ�� ���̺귯�� �� �ϳ��� stdio.h ��� ��� ���Ͽ� ����� ������ �����Ѵٴ� ��


int main(void) {// �Է� ���� main �Լ��� ȣ���Ͽ� ���������� ��� , �ü���� ���α׷��� ���������� ����Ǿ������� Ȯ���ϱ� ����
	int x, y;// ������ ���� ����
	printf("Enter the x, y coordinates of the point.\n");// ���� ���
	scanf("%d %d", &x, &y);// �Է� �ޱ�

	(x > 0 && y > 0) ? printf("It's in the 1th quadrant.") : printf("");//��1��и� �� ��� ���
	(x < 0 && y > 0) ? printf("It's in the 2th quadrant.") : printf("");//��2��и� �� ��� ���
	(x < 0 && y < 0) ? printf("It's in the 3th quadrant.") : printf("");//��3��и� �� ��� ���
	(x > 0 && y < 0) ? printf("It's in the 4th quadrant.") : printf("");//��4��и� �� ��� ���
	return 0;// // �ش� �Լ��� ���������� ������ �ü������ ����� ���� ��ȯ�ϰ� ���� �Լ��� ����� ����
}