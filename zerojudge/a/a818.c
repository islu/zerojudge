#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i, j, k;
		int *sq = (int*) malloc(sizeof(int)*n);
		char *s = (char*) malloc(sizeof(char)*n+1);
		char *password = (char*) malloc(sizeof(char)*n+1);
		for (i = 0; i < n; i++)
			scanf("%d", &sq[i]);
		scanf("%s", s);
		scanf("%d", &k);

		for (i = 0; i < k; i++) {
			for (j = 0; j < n; j++)
				password[j] = s[sq[j]-1];
		
			strcpy(s, password);

		}

		printf("%s\n", password);
		
		free(sq);
		free(s);
		free(password);
	}
	return 0;
}
