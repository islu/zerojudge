// sscanf
#include <stdio.h>
#include <string.h>
#define SIZE 2000

int main() {
	
	int T;
	while (scanf("%d", &T) != EOF)
	{
		int i, j;
		char s[SIZE];

		for (i = 1; i <= T; i++) {
			
			scanf("%s", s);
			int len = strlen(s);
			int bias = 0;
			int times;
			char buffer[SIZE], c;
			
			printf("Case %d: ", i);
			while (bias < len)
			{
				sscanf(s+bias, "%c%[0-9]s", &c, buffer); //XDDDDD
				bias += strlen(buffer)+1;
				sscanf(buffer, "%d", &times);
				for (j = 0; j < times; j++) printf("%c", c);
			}
			printf("\n");
		
		}
	}
	
	return 0;
}
