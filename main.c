#include <stdio.h>
void showMenu(void);
void dispTotal(void);
void dispQuarter(void);
void dispTop(void);
void dispMin(void);
void dispHousehold(void);
void dispDiff(void);
void dispLow(void);
void main(void)
{
	char userinput;
	do {
		showMenu();
		scanf(" %c", &userinput);
		fflush(stdin);
		switch (userinput)
		{
		case 'A': case 'a':
			dispTotal();
			break;
		case 'B': case'b':
			dispQuarter();
			break;
		case 'C': case'c':
			dispTop();
			break;
		case 'D': case'd':
			dispMin();
			break;
		case 'E': case'e':
			dispHousehold();
			break;
		case 'F': case'f':
			dispDiff();
			break;
		case 'G' : case'g':
			dispLow();
			break;
		case 'Q': case 'q':
			userinput = 'Q';
			printf("============================\n");
			puts("You have exited the program.");
			printf("============================\n");
			break;
		default:
			printf("=============================================================\n");
			printf("You have entered an invalid selection. Please try again.\n");
			printf("=============================================================\n");
		}
	} while (userinput != 'Q');
}
