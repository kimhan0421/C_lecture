/*���� �����۷� Ű�� ���ڿ��� �Է¹޾� ���ڿ��� ��ȣȭ*/

#include <stdio.h>

int main()
{
	int key, count = 1;
	char ch, del;

	printf("Enter the key.\n");
	scanf("%d", &key);
	scanf("%c", &del);	//key �� �Է½� ���� �� ����
	printf("Enter the text.\n");
		
	while (1)//�ϳ��� ���� ���� ����Ű�� �Էµ� ������ �ݺ�
	{
		scanf("%c", &ch);
		if (ch == '\n') {  //����Ű �Է½� break�� ��������	
			break;
		}
		ch += key;
		if (ch > 127) {//�ƽ�Ű �ڵ尪 127�� ������ ���θ� �Ѵ�.
			ch %= 128;
		}
		printf("%c", ch);
		count++;
	}
	return 0;
}