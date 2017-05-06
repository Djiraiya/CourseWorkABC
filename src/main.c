#include <stdio.h>
#include <unistd.h>
int main()
{
	while(1) {
        int number;
        system("CLS");
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
    	    printf("You entered an invalid menu item\n");
    	    system("PAUSE");
        }
    }
    return 0;
}