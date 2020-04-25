#include <stdio.h>
#include <stdlib.h>
#define SIZE 500
#define NUMBER 26

int main()
{
	int n;
	while (scanf("%d ", &n) != EOF)
	{
		char str[SIZE];
		int i, j;
		int list[30] = {0};
		int max = 0;
		
		for (i = 0; i < n; i++) {
			gets(str);
			int len = strlen(str);
			
			for (j = 0; j < len; j++) {
				if ('a' <= str[j] && str[j] <= 'z')
					list[str[j]-'a']++;
				else if ('A' <= str[j] && str[j] <= 'Z')
					list[str[j]-'A']++;
			}
		}

		while (1) {
			max = 0;
			for (i = 0; i < NUMBER; i++)
				if (list[i] > max) 
					max = list[i];
				
			if (max == 0) break;

			for (i = 0; i < NUMBER; i++) {
				if (list[i] == max) {
					printf("%c %d\n", i+'A', list[i]);
					list[i] = 0;
				}
			}
		}
	}
	return 0;
}