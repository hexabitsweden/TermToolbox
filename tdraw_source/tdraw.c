#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "tdraw.h"
#define BUFF 50

/**************************************
 *      Use it like this:             *
 *                                    *
 * tdraw 00111222333444566777888.     *
 *                                    *
 * Important! (.) dot ends line.      *
 *                                    *
 *  Daniel Jendinger (hexabit)        *
 *                                    *
 *             2013                   *
 *                                    *
 * ***********************************/

int tick;
char icol[BUFF];

void boom(char *color)
{
	printf("%s %s", color, none);
}





void draw(char *color, char *txt)
{
	int i;
	char mch[200];
	i=0; 
	strcpy(mch,txt);

	while(mch[i] !='.')
	{
		if(mch[i]=='.')
		{
			printf("%c", mch[i+1]); 
		}
		else if(mch[i]=='0')
		{
			printf("%s %s", none, none);
		}
		else if(mch[i]=='1')
		{
			boom(color);
		}
		else if(mch[i]=='2')
		{
			boom(bred);
		}
		else if(mch[i]=='3')
		{
			boom(bgreen);
		}
		else if(mch[i]=='4')
		{
			boom(bblue);
		}
		else if(mch[i]=='5')
		{
			boom(bgrey);
		}
		else if(mch[i]=='6')
		{
			boom(bwhite);
		}
		else if(mch[i]=='7')
		{
			boom(byellow);
		}
		else if(mch[i]=='8')
		{
			boom(bcyan);
		}
		else
		{
			printf("%s%c%s", color, mch[i], none);
		}
		i++;
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	if (argc !=2) {
		printf("usage: %s [color] [char]\nExample: [%s 001112223334446667778888.] (. <- dot ends line)]\n", argv[0], argv[0]);
		exit(0);
	}

	draw(bwhite, argv[1]);
}
