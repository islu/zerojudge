#include <stdio.h>

int main()
{
	char table[27] = "22233344455566677778889999";
	char str[31];
	int i;
	while (scanf("%s", str) != EOF)
	{
		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] >= 'A' && str[i] <= 'Z') printf("%c", table[str[i]-'A']);
			else printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}