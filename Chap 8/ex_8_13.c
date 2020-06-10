/*가장 작은 수를 돌려주는 함수를 이용한 프로그램*/
//가변 인자를 사용하는데, va_start, va_arg, va_end 매크로 함수를 호출해야 한다.
#include <stdio.h>
#include <stdarg.h> //가변인자 함수 사용하기 위한 파일

int find_min(int count, ...) {
	int min, temp, i;

	va_list(p); //p가 이 함수에 전달된 인자 리스트를 가리킴. 이때 p는 임의로 정한 변수
	va_start(p, count); // 리스트 초기화
	min = va_arg(p, int);//현 위치의 인자 돌려줌.int는 인자 타입.처음에는 30이 들어감.
	for (i = 2; i <= count; i++) {
		temp = va_arg(p, int);//나머지 인자들이 min과 비교. 작은 값이 min이 됨.
		if (temp < min) {
			min = temp;
		}
	}
	va_end(p);//매크로 끝내기
	return min;
}

int main() {
	int arg_count = 3;
	printf("Minimun is %d.\n", find_min(arg_count, 30,20,10));
	return 0;
}

