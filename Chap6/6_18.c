/*씨저 사이퍼로 키와 문자열을 입력받아 문자열을 암호화*/

#include <stdio.h>

int main()
{
	int key, count = 1;
	char ch, del;

	printf("Enter the key.\n");
	scanf("%d", &key);
	scanf("%c", &del);	//key 값 입력시 엔터 값 제거
	printf("Enter the text.\n");
		
	while (1)//하나의 문장 다음 엔터키가 입력될 때까지 반복
	{
		scanf("%c", &ch);
		if (ch == '\n') {  //엔터키 입력시 break로 빠져나감	
			break;
		}
		ch += key;
		if (ch > 127) {//아스키 코드값 127을 넘으면 모듈로를 한다.
			ch %= 128;
		}
		printf("%c", ch);
		count++;
	}
	return 0;
}