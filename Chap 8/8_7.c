/*���ȣ�⿡ ���� 1~n���� ���������� ����ϴ� ���α׷�*/
#include <stdio.h>

void print_up(int n) {
	if (n == 0) { //���̽� ���̽�
		return;
	}
	else {
		print_up(n - 1);
		printf("%d ",n);
	}

}

int main() {
	int num;
	printf("Enter the last integer.\n");
	scanf("%d", &num);
	print_up(num);
	return 0;
}