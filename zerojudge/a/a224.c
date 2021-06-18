#include <stdio.h>
#include <string.h>
#define SIZE 1200

int main()
{
	char str[SIZE];
	int len;
	int i;
	while (scanf("%s", str) != EOF)
	{
		int check_table[26] = {0};
		int odd = 0;
		len = strlen(str);
		for (i = 0; i < len; i++) {
			if ('a'<=str[i] && str[i]<='z') check_table[str[i]-'a']++;
			else if ('A'<=str[i] && str[i]<='Z') check_table[str[i]-'A']++;
		}
		for (i = 0; i < 26; i++) {
			if (check_table[i]%2 != 0) odd++;
		}
		odd <= 1 ? printf("yes !\n") : printf("no...\n");
	}
	return 0;
}