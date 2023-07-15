#include <stdio.h>

int main()
{
	int j, i, t;
	for (i = 0; i < 7; i++)
	{
		for (j = 1; j < 7 - i; j++)
		{
			printf(" ");
		}
		for (t = 1;  t <(t*2+1); t++);
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}