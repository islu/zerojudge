#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	while (scanf("%s", str) != EOF) 
	{
		int n;
		sscanf(str, "%d", &n);
		
		if (n < 0) break;
		
		if (n == 0 && str[1] == 'x') {
			sscanf(str, "%*dx%X", &n);
			printf("%d\n", n);
		}
		else printf("0x%X\n", n);
		
	}
	return 0;
}