#include <stdio.h>

int main()
{
	char hello[15];
	int i = 1;
	while (scanf("%s", hello) != EOF)
  {
  	if (!strcmp(hello, "HELLO")) printf("Case %d: ENGLISH\n", i);
  	else if(!strcmp(hello, "HOLA")) printf("Case %d: SPANISH\n", i);
  	else if(!strcmp(hello, "HALLO")) printf("Case %d: GERMAN\n", i);
  	else if(!strcmp(hello, "BONJOUR")) printf("Case %d: FRENCH\n", i);
  	else if(!strcmp(hello, "CIAO")) printf("Case %d: ITALIAN\n", i);
  	else if(!strcmp(hello, "ZDRAVSTVUJTE")) printf("Case %d: RUSSIAN\n", i);
  	else if(!strcmp(hello, "#")) break;
  	else printf("Case %d: UNKNOWN\n", i);
  	i++;
	}
}
