#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");
	char text;
	scanf("%c", &text);
	switch (text) {
		case '1':
			printf("���\n");
			break;
		case '2':
			printf("���\n");
			break;
		case '3':
			printf("���\n");
			break;
		case '4':
			printf("������\n");
			break;
		case '5':
			printf("����\n");
			break;
		case '6':
			printf("�����\n");
			break;
		case '7':
			printf("����\n");
			break;
		case '8':
			printf("������\n");
			break;
		case '9':
			printf("������\n");
			break;
	}
}