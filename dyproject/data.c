#include <stdio.h>
#include "../lib/mylib.h"

void data(void){
	int i;
	char strs [3][30];
	char *prompts[3] = {
		"Enter your name: ",
		"Enter your location: ",
		"Enter your arrival point: "
	};

	for (i=0; i<3; i++){
		printf("%s", prompts[i]);
		gets(strs[i]);
	}

	diagonals('~', 7);

	for (i=0; i<3; i++){
		printf("%s", prompts[i]);
		text(strs[i]);
	} 
}