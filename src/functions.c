#include <stdlib.h>
#include <string.h>

char String[30000];
int Words[15000];
int Number;

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
