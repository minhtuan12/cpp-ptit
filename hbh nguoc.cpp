#include <stdio.h>

int main()
{
	int line, column;
	scanf("%d%d", &line, &column);
	
	for (int i = 0; i < line; i++)
	{
		for (int k = 0; k < i; k++)
		{
			printf("~");
		}
		for (int j = 0; j < column; j++)
		{
			printf("*");
		}
		printf("\n");
		printf("\n");		
	}
}
