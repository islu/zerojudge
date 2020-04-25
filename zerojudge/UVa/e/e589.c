// morse code
#include <stdio.h>
#include <string.h>
#define SIZE 2020

char SYMBLE[] = "ABCDEFGHIGKLMNOPQRSTUVWXYZ0123456789.,?'!/()&:;=+-_\"@";
char CODE[][10] =
	{ 
		".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..",
		"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.",
		".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", ".--.-."
	};

int main()
{
	int T;
	while (scanf("%d ", &T) != EOF)
	{
		int i, j;
		int code[SIZE];
		for (i = 1; i <= T; i++)
		{
			gets(code);
			int len = strlen(code);
			int bias = 0;
			char buffer[10];
			char *s = code;

			printf("Message #%d\n", i);
			while (bias < len)
			{	
				sscanf(s+bias, "%s", buffer);
				bias += strlen(buffer)+1;
				for (j = 0; j < strlen(SYMBLE); j++) {
					if (strcmp(buffer, CODE[j]) == 0) {
						printf("%c", SYMBLE[j]);
						break;
					}
				}
				//printf("buffer: %s\n", buffer);
				if (s[bias] == ' ') {
					printf(" ");
					bias += 1;
				}				
			}
			printf("\n");
		}
	}
	
	return 0;
}
