#include <stdio.h>
#include <string.h>
#define SIZE 105

int main()
{
	char sq[SIZE];
	while (scanf("%s", sq) != EOF)
	{
		int i;
		int len = strlen(sq);
		int zero = 0;
		int doublezero = 0;

		for (i = 0; i < len; i++) {
			if (sq[i] == '0')
				zero++;
			if (sq[i] == '0' && (sq[(i+1)%len]) == '0')
				doublezero++;
		}

		if (zero*zero < doublezero*len) printf("SHOOT\n");
		else if (zero*zero > doublezero*len) printf("ROTATE\n");
		else printf("EQUAL\n");
	}

	return 0;
}