#include <stdio.h>
#include <stdlib.h>

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
            printf("Place for first func \n");
            break;
        case 2:
	    printf("Place for second func \n");
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
