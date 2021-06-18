#include <stdio.h>
#include <string.h>
#define RANGE 65535

int main()
{
	short prime[RANGE] = {0};
	char L[25];
	int i, j, len;
	
	prime[0] = 1;
	prime[1] = 0;
	
	for (i = 2; i < RANGE; i++) {
		if (prime[i] == 0) {
			for (j = i + i; j < RANGE; j += i) {
				prime[j] = 1;
			}
		}
	}
	
	while (scanf("%s", L) != EOF)
	{
		len = strlen(L);
		j = 0;
		for (i = 0; i < len; i++) {
			if ('a' <= L[i] && L[i] <= 'z') j += L[i] - 'a' + 1;
			else j += L[i] - 'A' + 27;
		}

		if (prime[j] == 0) printf("It is a prime word.\n");
		else printf("It is not a prime word.\n");
		
	}
	return 0;
}