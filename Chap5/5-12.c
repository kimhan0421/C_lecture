/*�� ���α׷��� �����Կ� Ű�� ��ġ�� �Է¹޾� BMI ��� ����� ����ϴ� ���α׷��̴�. */
#include<stdio.h>  // C ǥ�� ���̺귯�� �� �ϳ��� stdio.h ��� ��� ���Ͽ� ����� ������ �����Ѵٴ� ��


int main() {// �Է� ���� main �Լ��� ȣ���Ͽ� ���������� ��� , �ü���� ���α׷��� ���������� ����Ǿ������� Ȯ���ϱ� ����
	float w, h, bmi;

	printf("Enter your weight.\n");// ���� ���
	scanf("%f", &w);// �Է� �ޱ�
	printf("Enter your height.\n");// ���� ���
	scanf("%f", &h);// �Է� �ޱ�

	bmi = w/(h*h);//bmi ���

	//BMI ũ�⿡���� ��� ���
	if (bmi < 18.5) {
		printf("Your BMI is %.2f. It is Underweight.", bmi);// ���� ���
	}
	else if ((18.5 <= bmi) || (bmi < 25.0)) {
		printf("Your BMI is %.2f. It is normal.", bmi);// ���� ���
	}
	else if ((18.5 <= bmi) || (bmi < 25.0)) {
		printf("Your BMI is %.2f. It is Overweight.", bmi);// ���� ���
	}
	return 0; // �ش� �Լ��� ���������� ������ �ü������ ����� ���� ��ȯ�ϰ� ���� �Լ��� ����� ����
}
