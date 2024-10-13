#include <stdio.h>
#include <locale.h>

void main() {
	setlocale(LC_ALL, "RUS");
	char text;
	scanf("%c", &text);
	switch (text) {
		case '1':
			printf("Раз\n");
			break;
		case '2':
			printf("два\n");
			break;
		case '3':
			printf("три\n");
			break;
		case '4':
			printf("четыре\n");
			break;
		case '5':
			printf("пять\n");
			break;
		case '6':
			printf("шесть\n");
			break;
		case '7':
			printf("семь\n");
			break;
		case '8':
			printf("восемь\n");
			break;
		case '9':
			printf("девять\n");
			break;
	}
}