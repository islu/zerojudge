#include <stdio.h>
#include <string.h>

int main()
{
	char name[500];
	gets(name);
	
	char token[] = " ";
	char *pch;
	pch = strtok(name, token);

	while (pch != NULL)
	{ 
		printf("%s\n", pch);
		pch = strtok(NULL, token);
	}
}