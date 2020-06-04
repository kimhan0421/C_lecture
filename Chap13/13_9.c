/*디지털 시계 시뮬레이션*/

#include<stdio.h> 
#include<time.h> 
#include<windows.h>


int main() {
	struct tm* struct_ptr;

	while (1) {
		system("CLS");   //화면 클리어 
		time_t now = time(NULL);     // now에 70년 이후 현재까지 경과한 초를 대입 
		struct_ptr = localtime(&now);     // now를 가지고 시간 구조체를 채움 
		printf("%02d:%02d:%02d", struct_ptr->tm_hour, struct_ptr->tm_min, struct_ptr->tm_sec);
		// 구조체 멤버 변수를 써서 HH:MM:SS 형식으로 시간, 분, 초를 찍음. 
		Sleep(1000);//너무 빠른 업데이트를 방지. 1000ms를 대기. S는 대문자. 
	}
	return 0;
}
