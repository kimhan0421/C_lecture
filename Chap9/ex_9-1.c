/*다섯마리 토끼의 무게평균 구하는 프로그램*/
#define MAX 5
#include <stdio.h>

int main() {
	int i, sum = 0;
	double aver;
	int ra[MAX];

	printf("Enter weights of five rabbius.\n");
	for (i = 0; i < MAX; i++) {//5마리의 무게를 입력받음
		scanf("%d",&ra[i]);
	}
	for (i = 0; i < MAX; i++) {//합계 구함. 등호포함시 배열 인덱스 초과
		sum += ra[i];
	}
	printf("Average weight is %.3lf.\n",((double)sum)/MAX);//주소
	printf("&rabbit[0] : %p.\n",&ra[0]);
	printf("&rabbit[1] : %p.\n", ra[1]);//배열명 자체가 주소
	printf("rabbit : %p.\n", ra);
	return 0;
}
