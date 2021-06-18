#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000];
	while(scanf("%s", str) != EOF)
	{
		int i;	
		int flag = 0;	
		for (i = 0; i < strlen(str)/2; i++) {
			if (str[i] != str[strlen(str)-1-i]) {
				flag = 1;
				break;
			}
		}
		
		if (flag == 1) printf("no\n");
		else printf("yes\n");
	}
	return 0;
}