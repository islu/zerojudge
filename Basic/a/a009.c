#include <stdio.h>

int main()
{
	int K = 7;
	char code[200];
	int i;
	while (scanf("%s", code) != EOF)
	{
		for (i = 0; i < sizeof(code); i++) {
			if (code[i] == '\0') break;
			else {
				code[i] -= K;
				printf("%c", code[i]);
			}
		}
		printf("\n");
	}
	return 0;
}