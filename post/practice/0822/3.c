#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LEN 10

int main(int argc, char *argv[])
{
	int i, j, tmp;	
	int num[LEN] = {0};

	srand(time(NULL));

	for(i = 0; i < LEN; i++)
	{
		num[i] = rand() % 100;	
		printf("%d, ", num[i]);
	}
	printf("\n");

	for(i = 0; i < LEN -1; i++)
	{
		for(j = 0; j < LEN -1 - i; j++)
		{
			if(num[j] > num[j+1])
			{
				tmp = num[j];
				num[j] = num[j+1];
				num[j+1] = tmp;
			}
		}
	}

	printf("after sort...\n");

	for(i = 0; i < LEN; i++)
	{
		printf("%d, ", num[i]);
	}
	printf("\n");

	return 0;
}
