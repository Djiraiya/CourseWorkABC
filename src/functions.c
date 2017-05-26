#include <stdlib.h>
#include <string.h>
#include <stdio.h>

extern char String[30000];
extern int Words[15000];
extern int Number;
extern char Name[15];
extern int Type;

void sort()
{
	for (int j = Number - 1; j > 0; j --)
	{
		for (int i = 0; i < j; i ++)
		{
			if (strcmp(&String[Words[i]], &String[Words[i + 1]]) > 0)
			{
				int Temp = Words[i];
				Words[i] = Words[i + 1];
				Words[i + 1] = Temp;
			}
		}
	}
}	

void file()
{
	if (system("clear")) system("CLS");
	if (Type == 1)
	{
		FILE *f = fopen(Name, "r");
		while (! feof(f))
		{
			if (fgets(String, 30000, f) != 0)
			{
				printf("Original text:\n");
				printf("%s\n\n", String);
			}
		}
	}
	if (Type == 2)
	{
		printf("Original text:\n");
		printf("%s\n\n", String);
	}
	int i, j, Temp, Flag;
	for (Number = 0, Flag = 1, i = 0; String[i]; i ++)
	{
		if (String[i] == ' ' || String[i] == ',' || String[i] == '.' || String[i]== '?' 
|| String[i] == '!' || String[i] == '\t' || String[i] == '-')
		{
			String[i] = 0;
			Flag = 1;
		}
		else if (Flag)
		{
			Words[Number ++] = i;
			Flag = 0;
		}
	}
	sort();
	print();			
}

void print()
{
	printf("Sorted text:\n");
	for (int i = 0; i < Number; i ++)
	{
		printf("%s ", &String[Words[i]]);
	}
	printf("\n");
	getchar();
	getchar();
}
