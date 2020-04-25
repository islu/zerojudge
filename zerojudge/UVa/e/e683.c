#include <stdio.h>
#include <string.h>
#define SIZE 1000

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i, j, len;
		char S[SIZE];

		for (i = 0; i < n; i++) {
			scanf("%s", S);
			len = strlen(S);
			if (S[len-2] == '3' && S[len-1] == '5')
				printf("-\n");
			else if (S[0] == '9' && S[len-1] == '4')
				printf("*\n");
			else if (S[0] == '1' && S[1] == '9' && S[2] == '0')
				printf("?\n");
			else 
				printf("+\n");
		}
	}
	return 0;
}