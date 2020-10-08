#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tcolor.h"
#define BUFF 50

int tick;
char icol[BUFF];
char text[BUFF];

int textIT(char *color, char *text) {

		printf("%s%s ",color, text);
			/*printf("%s", none);*/
			return 0;
		}

int main(int argc, char *argv[])
{
	if (argc !=3) {
		printf("usage: %s [color] [\"text\"]\n", argv[0]);
		exit(0);
	}
	strcpy(icol, argv[1]);

        strcpy(text, argv[2]);

	if(!strcmp(argv[1], "blue")) {
		textIT(blue, text);
		exit(0);
	}

	if(!strcmp(argv[1], "red")) {
		textIT(red, text);
		exit(0);
	}
	if(!strcmp(argv[1], "yellow")) {
		textIT(yellow, text);
		exit(0);
	}
	if(!strcmp(argv[1], "green")) {
		textIT(green, text);
		exit(0);
	} 

	if(!strcmp(argv[1], "brown")) {
		textIT(brown, text);
		exit(0);
	} 

	if(!strcmp(argv[1], "cyan")) {
		textIT(cyan, text);
		exit(0);
	}

	if(!strcmp(argv[1], "white")) {
		textIT(white, text);
		exit(0);
	}

	if(!strcmp(argv[1], "pink")) {
		textIT(pink, text);
		exit(0);
	}

	else {
		printf("Color unknown..\n");
		exit(1);
	}
}


	
