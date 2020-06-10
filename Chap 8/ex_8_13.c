/*���� ���� ���� �����ִ� �Լ��� �̿��� ���α׷�*/
//���� ���ڸ� ����ϴµ�, va_start, va_arg, va_end ��ũ�� �Լ��� ȣ���ؾ� �Ѵ�.
#include <stdio.h>
#include <stdarg.h> //�������� �Լ� ����ϱ� ���� ����

int find_min(int count, ...) {
	int min, temp, i;

	va_list(p); //p�� �� �Լ��� ���޵� ���� ����Ʈ�� ����Ŵ. �̶� p�� ���Ƿ� ���� ����
	va_start(p, count); // ����Ʈ �ʱ�ȭ
	min = va_arg(p, int);//�� ��ġ�� ���� ������.int�� ���� Ÿ��.ó������ 30�� ��.
	for (i = 2; i <= count; i++) {
		temp = va_arg(p, int);//������ ���ڵ��� min�� ��. ���� ���� min�� ��.
		if (temp < min) {
			min = temp;
		}
	}
	va_end(p);//��ũ�� ������
	return min;
}

int main() {
	int arg_count = 3;
	printf("Minimun is %d.\n", find_min(arg_count, 30,20,10));
	return 0;
}

