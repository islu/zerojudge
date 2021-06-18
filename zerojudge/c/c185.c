#include <stdio.h>
#include <string.h>

int main() 
{
	char s[500];
	while (gets(s) != 0)
	{
		printf("Hey %s\n", s);
	}
	return 0;
}