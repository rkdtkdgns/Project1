#include <stdio.h>

int main()
{
	int j, i, y, t;
	y = 0;
	j = 0;
	i = 0;
	printf("มูภิทย"); 
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		for (j = i; j <t +1  ; j++)
		{
			printf(" ");
		}
 		for (y = 0;  y <= (i*2); y++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}