#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

char String[30000];
int Words[15000];
int Number, Type;
char Name[15];

int main()
{
	while(1) {
        int number;
        if (system("clear")) system("cls");
        printf("________________________________\n");
        printf("|1-Select a text file           |\n");
        printf("|_______________________________|\n");
        printf("|2-Enter text from the keyboard |\n");
        printf("|_______________________________|\n");
        printf("|3-Exit                         |\n");
        printf("|_______________________________|\n");
        printf("Enter number: ");
        scanf("%i", &number);
        switch (number) {
        case 1:
            if (system("clear")) system("cls");
	    Type = 1;
	    printf("Enter file name: ");
	    scanf("%s", Name);
	    FILE *f = fopen(Name, "r");
	    if (f == NULL)
	    {
	    	printf(" File not found!\n");
		getchar();
		getchar();
		break;
	    }
	    fclose(f);
	    file();
	    getchar();
            break;
        case 2:
	    if (system("clear")) system("cls");
	    Type = 2;
	    if (Type == 2) fgets(String, sizeof String, stdin);
	    printf("Enter text:\n");
	    fgets(String, sizeof String, stdin);
	    file();
            break;
        case 3:
    	    return 0;
        default:
            getchar();
            printf("You entered an invalid menu item, press 'Enter' and try again\n");
	    getchar();
        }
    }
}
