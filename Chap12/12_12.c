/*quit�Է������� �ܾ �Է¹޾� 2���� �����迭�� ������ �� 
�׵��� �Էµ� �ܾ ����ϴ� ���α׷�*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char** p = NULL, word[100];
	int i, row = 0; // row�� �� ��ȣ(0,1,2...)
	while (1) {
		printf("Enter a word.\n");
		gets(word);
		if (strcmp(word, "quit") == 0) { // quit�� �ԷµǸ� ������ ��������
			break;
		}
		p = realloc(p, (row + 1) * sizeof(char *)); //realloc, row�� �Ἥ �ܾ ���� ������ ���� �� ����
		if (p == NULL) { //�� �׽�Ʈ
			exit(1); //���̸� exit�� ��������
		}
		p[row] = (char *)malloc((strlen(word) + 1) * sizeof(char));
		//alloc�� �Ἥ p[row]�� �ܾ� ũ�⸸ŭ�� ���� �޸𸮸� ����Ű�� ��
		if (p[row] == NULL) { //�� �׽�Ʈ
			exit(1); // ���̸� exit�� ��������
		}
		strcpy(p[row], word);		// word�� p[row]�� ����    
		row++;
	}
	for (i = 0; i < row; i++) {// ������ ���鼭 p[i]�� ����Ű�� ���� ���   
		puts(p[i]);
	}
	printf("\n");						// ����  

	for (i = 0; i < row; i++) {	// ������ ���鼭 p[i]�� ����Ű�� ���� �ݳ�  
		free(p[i]);
	}
	free(p);								// p�� ����Ű�� ������ �迭 ���� �ݳ�  
	return 0;

}
