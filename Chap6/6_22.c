/* 1���� N ���� 3,6,9������ �ϴ� ���α׷�*/

#include <stdio.h>
int number(int n);//���� 0 �ɶ����� 10�����鼭 �������� 369���� Ȯ������ �ڼ�Ȯ��

int number(int n) {
	int clap, sum = 0;
	while (1) { 
		if (n == 0) {
			break;
		}
		clap = n % 10;
		if ((clap % 3 == 0) && (clap != 0)) {//3���� �������� �ڼ� && 0�� �ƴϾ�� �Ѵ�
			sum += 1;
		}
		n /= 10;//������ ���
	}
	return sum;
}
int main()
{
	int num;
	printf("Enter a number.\n");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++){
		if (number(i) == 0)	{
			printf("%d", i);
		}
		else{  //�ڼ�ģ��	
			for (int j = 1; j <= number(i); j++){
				printf("!");
			}
		}
		printf(" ");//���� ���
	}
	return 0;
}

