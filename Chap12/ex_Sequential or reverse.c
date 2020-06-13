/*영문과 한글이 섞인 문장을 입력받아
순서대로 혹은 거꾸로 출력*/

#include <stdio.h>
#include <string.h>

int main() {
	int i;
	unsigned char str[40];

	printf("Enter a mixture of Koean and English.\n");
	gets(str);
	puts(str);//순서대로 출력

	for (i = 0; i < (int)strlen(str); i++) {//순서대로 출력
		printf("%c", str[i]);
	}
	printf("\n");

	/*인덱스를 뒤에서 앞으로 이동*/
	for (i = (int)strlen(str) - 1; i >= 0;) {
		if (str[i] >= 0 && str[i] <= 127) {//영문범위
			printf("%c", str[i]);
			i--;//c->b로 감
		}
		/*유니코드로 간주*/
		else {//한글이면
			printf("%c", str[i - 1]);
			printf("%c", str[i]);
			i -= 2;
		}
	}
	printf("\n");
	return 0;
}