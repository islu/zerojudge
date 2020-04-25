#include <stdio.h>
#include <string.h>

int main()
{
	int T;
	int i, j;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		char number[1000];
		long long total = 1;
		scanf("%s", number);
		for (j = 0; j < strlen(number); j++)
			total *= (number[j]-48);
			
		printf("%d\n", total);

	}
	return 0;
}