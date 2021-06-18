#include <stdio.h>
#include <string.h>
#include <math.h>
#define SIZE 100

int main()
{
	int t;
	while (scanf("%d ", &t) != EOF)
	{
		int i, j;
		for (i = 0; i < t; i++) {
			char str[SIZE];
			char ans[SIZE];
			gets(str);
			gets(ans);

			if (strcmp(str,ans) == 0)
				printf("Case %d: Yes", i+1);
			else {
				int len = strlen(str);
				char newStr[SIZE] = {'\0'};
				int index = 0;

				for (j = 0; j < len; j++) {
					if (str[j] != ' ') {
						newStr[index] = str[j];
						index++;
					}
				}

				if (strcmp(newStr,ans) == 0) printf("Case %d: Output Format Error", i+1);
				else printf("Case %d: Wrong Answer", i+1);

			}
      
			if (i != t-1) printf("\n");
		}
	}

	return 0;
}
