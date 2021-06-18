#include <stdio.h>

int main()
{
	int row, column;
	while (scanf("%d%d", &row, &column) != EOF)
	{
		int i;
		int j = 0;
		int counter = 0;
		int flip[1000];
		for (i = 0; i <row*column; i++)
			scanf("%d", &flip[i]);

		while (counter != column) {
			for (i = 0; i < row; i++) {
				printf("%d ", flip[j+counter]);
				j += column;
			}
			printf("\n");
			j = 0;
			counter++;
		}
	}
	return 0;
}