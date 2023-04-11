#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	for (i = 1; i < argc; i++)
	{
		int num = 0;
		int j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return 1;
			}
			num = num * 10 + (argv[i][j] - '0');
			j++;
		}
		sum += num;
	}
	printf("%d\n", sum);
	return 0;
}
