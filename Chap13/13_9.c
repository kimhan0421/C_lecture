/*������ �ð� �ùķ��̼�*/

#include<stdio.h> 
#include<time.h> 
#include<windows.h>


int main() {
	struct tm* struct_ptr;

	while (1) {
		system("CLS");   //ȭ�� Ŭ���� 
		time_t now = time(NULL);     // now�� 70�� ���� ������� ����� �ʸ� ���� 
		struct_ptr = localtime(&now);     // now�� ������ �ð� ����ü�� ä�� 
		printf("%02d:%02d:%02d", struct_ptr->tm_hour, struct_ptr->tm_min, struct_ptr->tm_sec);
		// ����ü ��� ������ �Ἥ HH:MM:SS �������� �ð�, ��, �ʸ� ����. 
		Sleep(1000);//�ʹ� ���� ������Ʈ�� ����. 1000ms�� ���. S�� �빮��. 
	}
	return 0;
}
