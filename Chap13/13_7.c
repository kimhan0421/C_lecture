/*3���� ������ ������ ����ϴ� ���α׷�.*/

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

typedef struct {
	char* name;    // ������ �̸� 
	char rating;   // ���: 'A', 'B', 'C'�� �� 
} siteType;

int main() {
	int i; char temp[100];
	siteType* sites[3];  //����ü�� ����Ű�� ������ �迭 
	for (i = 0; i < 3; i++) { // 3���� �������� ���� ���������
		sites[i] = (siteType*)malloc(sizeof(siteType));
		// �����͸� ������ �׻� ����Ű�� ����� ������ ������ ���� ������ �� 
		if (sites[i] == NULL) { //�� �׽�Ʈ 
			exit(1);  //exit�� �������� 
		}
		printf("Enter name of tour site.\n");
		gets(temp);
		sites[i]->name = (char*)malloc((strlen(temp) + 1) * sizeof(char)); // �� ���� �ΰ� ���� +1�ϱ�
		// �����͸� ������ �׻� ����Ű�� ����� ������ ������ ���� ������ �� 
		if (sites[i]->name == NULL) {  //�� �׽�Ʈ 
			exit(1);
		}
		strcpy(sites[i]->name, temp);   //���ڿ� ���� 
		printf("Enter rating of the tour site.A or B or C.\n"); // �Է��� A, B, C �߿� �޴´ٰ� �Ѵ�.
		scanf("%c", &sites[i]->rating);   // ��� �Է¹޾� ����
		while (gets(temp) == NULL);   //�Է� ���� Ŭ���� 
	}
	for (i = 0; i < 3; i++) { // 3���� �������� ���� ���
		printf("%s %c\n", sites[i]->name, sites[i]->rating);
	}
	return 0;
}