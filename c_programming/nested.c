#include <stdio.h>

int main()
{

	for(int i = 0; i <= 10; i++)
	{
		for(int j = i; j >= 0; j--)
		{
			printf("%i",j);
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
