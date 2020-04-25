#include <stdio.h>
#include <stdlib.h>
#define SIZE 1005
#define NUMBER 256

int main()
{
	char str[SIZE];
	while (gets(str) != 0)
	{
		int i, j;
		int list[NUMBER] = {0};
		int len = strlen(str);
			
		for (i = 0; i < len; i++)
			list[str[i]]++;

		for (i = 1; i <= len; i++)
			for (j = NUMBER-1; j >=0; j--)
				if (list[j] == i)
					printf("%d %d\n", j, i);
		
		printf("\n");
	}
	return 0;
}