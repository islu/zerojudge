#include <stdio.h>
#include <string.h>

int main() 
{
	char s[500];
	while (gets(s) != 0)
	{
		int i, j, len, index;
		char hel[50], name[50];

		gets(hel);
		len = strlen(s);
		index = 0;

		for (i = 0; i < len; i++) {
			if (s[i] == ' ') {	
				printf("%s, %s\n", hel, name);

				name[0] = '\0';
				index = 0;

				continue;
			}

			name[index] = s[i];
			name[index+1] = '\0';
			index++;

		}

		printf("%s, %s\n", hel, name);

	}
	return 0;
}