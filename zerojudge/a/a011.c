#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	int len;
	int i;
	while (gets(str) != 0)
	{
		int count = 0;
		int start = 1;
		len = strlen(str);
		for (i = 0; i < len; i++) {
			if (('a'<=str[i] && str[i]<='z') || ('A'<=str[i] && str[i]<='Z')) {
				if (start) {
					start = 0;
					count++;
				}
			}
			else start = 1;
		}
		printf("%d\n", count);
	}
	return 0;
}
