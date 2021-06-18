#include <stdio.h>
#include <string.h>

int main()
{
	char code[7];
	int decode;
	int i;
	while (scanf("%s", code) != EOF)
	{
		 for (i = 0; i < strlen(code)-1; i++) {
			 decode = code[i+1]-code[i];
			 if (decode < 0) printf("%d", decode*(-1));
			 else printf("%d", decode);
		 }
		 printf("\n");
	}
	return 0;
}