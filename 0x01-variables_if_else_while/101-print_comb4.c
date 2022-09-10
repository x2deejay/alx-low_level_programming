#include <stdio.h>
/**
 * main - main entry point
 *
 * Description: This program through the entry point
 * runs all possible combinations of three digits
 * Return: 0
 */

void printTwoCombinations(int a=0, int b=1, int c=2)
{
	putchar(a+'0'); putchar(b+'0'); putchar(c+'0'); putchar('\n');
	putchar(a+'0'); putchar(c+'0'); putchar(b+'0'); putchar('\n');}
int main(void)
{ 
	int i, j, last;
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			if (j==i) continue;
			last = j+1;
			if (i==last) ++last;
			printTwoCombinations(i,j,last);
		}
		break;
	}
	return 0;
}	
