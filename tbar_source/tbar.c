#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tbar.h"
#define BUFF 50

int tick;
char icol[BUFF];


void border(char *color, int num) {

	tick = 0;
	while (tick != num) {  
		printf("%s %s",color, none);
		tick++;           
		if (tick == num) {  
			printf("\n%s", none);
		}	
	}
}


int main(int argc, char *argv[])
{
	if (argc !=3) {
		printf("usage: %s [color] [number]\n", argv[0]);
		exit(0);
	}
	int num = atoi(argv[2]); 
	strcpy(icol, argv[1]);

	if(!strcmp(argv[1], "blue")) {
		border(blue, num);
		exit(0);
	}

	if(!strcmp(argv[1], "red")) {
		border(red, num);
		exit(0);
	}
	if(!strcmp(argv[1], "yellow")) {
		border(yellow, num);
		exit(0);
	}
	if(!strcmp(argv[1], "green")) {
		border(green, num);
		exit(0);
	} 

	if(!strcmp(argv[1], "brown")) {
		border(brown, num);
		exit(0);
	} 

	if(!strcmp(argv[1], "cyan")) {
		border(cyan, num);
		exit(0);
	}

	if(!strcmp(argv[1], "white")) {
		border(white, num);
		exit(0);
	}

	else {
		printf("Color unknown..\n");
		exit(1);
	}
}
