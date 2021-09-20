#include <stdio.h>
#include "../lib/mylib.h"

void main(){
	rect('-', 75,4);
	data();
	rect('+', 75,3);
}


/*
void main(){

	int w, h;

	char sign;
	printf("Hello world!\n");
	
	printf("write width\n");
	scanf("%d", &w);
	printf("write height\n");
	scanf("%d", &h);
	getchar(); // нужно, чтобы не конфликтовало со scanf в дальнейшем .. ПОЧЕМУ ТАК.. Понимаю, что жрет символ переноса строки, который остается после ввода scanf
			  // для scanf перенос строки - это терминатор, но этот символ остаётся
	printf("write sign\n");
	
	sign = getchar();
	
	//printf("%c\n", sign);

	rect(sign, w, h);

	diagonals(sign, w);


	char ch[100];
	printf("write something\n");
	scanf("%s", ch);
	text(ch);
}

*/