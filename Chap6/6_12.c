/*Ȧ�� �Է½� ����ϴ� ���α׷�*/

#include<stdio.h>

int main() {
	int num;

	printf("Enterthe number.\n");
	scanf("%d", &num);


	for (int i = 1; i <= num; i++) { //�� ������ Ȧ����ŭ ����	
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d", j);
		}
		printf("\n");
	}

	for (int i = 1; i <= num; i += 2) { // ���� �Է°����� �ΰ��� ����, Ȧ����ŭ �����Ѵ�.
		for (int j = 1; j <= num - i; j += 2) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * i) - 1; j += 2) {
			printf("*");
		}

		printf("\n");
	}
	return 0;
}