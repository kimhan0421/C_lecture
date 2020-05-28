/*전치사 in이 나오는 개수 출력*/
#include <stdio.h>

int main() {
	int ch, state = 0, count = 0;

	printf("Enter a sentence.\n");
	for (ch = getchar(); ch != '\n'; ch = getchar()) {
		switch (state) {//switch문이 상태별로 해야할 일 기술
		case 0://대기상태에 읽어들인 
			if (ch == 'i') {//값이 'i'면 
				state = 1;//상태 1로 옮겨짐
			}
			break;
		case 1://i가 입력된 상태에서
			if (ch == 'n') {//n이 입력되면
				state = 2;//상태 2로 옮겨짐
			}
			else {
				state = 0;
			}
			break;
		case 2://i,n이 입력된 상태에서
			if (ch == ' ') {//전치사 뒤에는 공백만 와야 전치사로 인정되기 때문에 공백이 입력되면
				state = 3;//상태 3으로 옮겨짐
			}
			else {
				state = 0;
			}
			break;
		case 3:
			count++;//전치사 개수를 센다.
			state = 0;//상태 0으로 옮겨짐

		defalut:
			break;
		}
	}
	printf("The preposition 'in' appears %d times.\n", count);
	putchar('\n');
	return 0;
}