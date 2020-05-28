/* 1부터 N 까지 3,6,9게임을 하는 프로그램*/

#include <stdio.h>
int number(int n);//몫이 0 될때까지 10나누면서 나머지가 369인지 확인으로 박수확인

int number(int n) {
	int clap, sum = 0;
	while (1) { 
		if (n == 0) {
			break;
		}
		clap = n % 10;
		if ((clap % 3 == 0) && (clap != 0)) {//3으로 나눠지면 박수 && 0이 아니어야 한다
			sum += 1;
		}
		n /= 10;//다음수 계산
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
		else{  //박수친다	
			for (int j = 1; j <= number(i); j++){
				printf("!");
			}
		}
		printf(" ");//공백 출력
	}
	return 0;
}

