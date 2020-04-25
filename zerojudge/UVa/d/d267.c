#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	int i, j;
	char s[500];
	while (scanf("%d ", &n) != EOF)
	{
		for (i = 0; i < n; i++) {
			int c[27] = {0};
			int max = 0;
			gets(s);
			int len = strlen(s);
			for (j = 0; j < len; j++) {
				if ('a' <= s[j] && s[j] <= 'z') c[s[j]-'a']++;
				else if ('A' <= s[j] && s[j] <= 'Z') c[s[j]-'A']++;
			}
			for (j = 0; j < 27; j++) {
				if (max < c[j]) max = c[j];
			}
			for (j = 0; j < 27; j++) {
				if (max == c[j]) printf("%c", j+'a');
			}
			printf("\n");
		}
	}
   
	return 0;
}