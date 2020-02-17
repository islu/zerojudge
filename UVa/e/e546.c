#include <stdio.h>		
#define SIZE 10005

int main()
{
	int N, R;
	while (scanf("%d%d", &N, &R) != EOF)
	{
		int i, temp;
		short record[SIZE] = {0};
		for (i = 0; i < R; i++) {
			scanf("%d", &temp);
			record[temp] = 1;
		}
		
		if (N == R) printf("*");
		else {
			for (i = 1; i <= N; i++)
				if (record[i] == 0) printf("%d ", i);
		}
		printf("\n");
	}
	return 0;
}