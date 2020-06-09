/* �Է� ���ڸ� ���� �����۸� ����� ���α׷�*/

#include <stdio.h>
#include <stdlib.h>
int main() {
	char ch; int key, count;

	FILE* fp = fopen("encrypt.bin", "w+b");// encrypt.bin ����. ���� �б� ���
	if (fp == NULL) {// �� �׽�Ʈ
		fprintf(stderr, "Error while reading.");// fprintf(stderr) ���� �޼���
		exit(1);// exit
	}

	printf("Enter key.\n");
	scanf("%d", &key);	// key ���� �Է� ����
	while (getchar() != '\n');// �Է� ���� Ŭ����
	printf("Enter texts to encrypt.\n");
	while ((ch = getchar()) != '\n') {// '\n' �� �ƴ� ������
		ch = (ch + key) % 128;	// �ƽ�Ű ������ ����� wrap around
		count = fwrite(&ch, sizeof(ch), 1, fp);// 2�� ���Ϸ� ����
		if (count < 1) {// count�� 1���� ������
			fprintf(stderr, "Error whle writing."); // �����޼���
			exit(1);// exit
		}
	}

	fseek(fp, 0, SEEK_SET);// �б� ��带 ���� ��ġ �����͸� ���� ó������ �ǵ���
	while (fread(&ch, sizeof(ch), 1, fp)) {// 2�� ���� �б�. ch�� �о����
		ch = ch - key;// ���� ���� ����
		if (ch < 0) { ch += 128; }// �ƽ�Ű ������ ����� wrap around
		printf("%c", ch);// ch�� ȭ�鿡 ���
	}
	if (!feof(fp)) {// ���� ���� �ƴϸ� ���� �޽���
		fprintf(stderr, "Error occurs.");
		exit(1);
	}
	fclose(fp);	// ���� �ݱ�
	return 0;
}