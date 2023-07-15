#include <stdio.h>

int main()
{
	int j, i, y, t;
	y = 0;
	printf("มูภิทย");
	scanf("%d", &t);
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8- i; j++)
		{
			printf(" ");
		}
		for (y = 0 ; i > (y*2-1); y++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}