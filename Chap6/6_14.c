/*�ڿ��� �ڸ����� �ݴ�� ���*/

#include <stdio.h>
void reverse_it(int num);//�ڸ� �ٲٴ� �Լ�

void reverse_it(int num) {
	while( num > 0) {
		printf("%d", num % 10);
		num = num / 10;
	}
	printf("\n");
}


int main() {
	int n;
	while (1) {  //�ڿ��� �ϋ� while�� ����
		printf("Enter a number N.\n");
		scanf("%d", &n);
		if (n <= 0) { //�ڿ��� �ƴ϶�� break�� �������� ����.
			break;
		}
		reverse_it(n);//reverse_it�Լ� ȣ��
	}
	return 0;
}