/*이 프로그램은 몸무게와 키의 수치를 입력받아 BMI 평과 결과를 출력하는 프로그램이다. */
#include<stdio.h>  // C 표준 라이브러리 중 하나인 stdio.h 라는 헤더 파일에 선언된 내용을 포함한다는 뜻


int main() {// 입력 없이 main 함수를 호출하여 정수형으로 출력 , 운영체제가 프로그램이 정상적으로 종료되었는지를 확인하기 위함
	float w, h, bmi;

	printf("Enter your weight.\n");// 문장 출력
	scanf("%f", &w);// 입력 받기
	printf("Enter your height.\n");// 문장 출력
	scanf("%f", &h);// 입력 받기

	bmi = w/(h*h);//bmi 계산

	//BMI 크기에따라 결과 출력
	if (bmi < 18.5) {
		printf("Your BMI is %.2f. It is Underweight.", bmi);// 문장 출력
	}
	else if ((18.5 <= bmi) || (bmi < 25.0)) {
		printf("Your BMI is %.2f. It is normal.", bmi);// 문장 출력
	}
	else if ((18.5 <= bmi) || (bmi < 25.0)) {
		printf("Your BMI is %.2f. It is Overweight.", bmi);// 문장 출력
	}
	return 0; // 해당 함수를 정상적으로 끝내고 운영체제에게 기술한 값을 반환하고 현재 함수를 벗어나기 위함
}
