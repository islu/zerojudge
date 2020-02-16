#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	long long counter = 1;
	int i;
	while (gets(str) != 0)
	{
		int len = strlen(str);
		for (i = 0; i < len; i++) {
			if (counter%2 == 1 && str[i] == '"') {
				printf("``");
				counter++;
			}
			else if (counter%2 == 0 && str[i] == '"') {
				printf("''");
				counter++;
			}
			else printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}
