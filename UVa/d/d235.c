#include <stdio.h>
#include <string.h>
#define SIZE 1200

int main()
{
	char N[SIZE];
	while (scanf("%s", N) != EOF)
	{
		if (N[0] == '0') break;
		int len = strlen(N);
		int sum = 0;	
		int i;
		N[len] = '0';
		N[len+1] = '\0';
		for (i = 0; i < len; i += 2) {
			sum += N[i] - '0';
			sum -= (N[i+1] - '0');
		}
		N[len] = '\0';
		
		if (sum % 11 == 0) printf("%s is a multiple of 11.\n", N);
		else printf("%s is not a multiple of 11.\n", N);

	}
	return 0;
}