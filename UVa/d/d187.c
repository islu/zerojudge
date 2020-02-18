#include <stdio.h>
#include <string.h>

int main()
{
	int T;
	int i, j;
	int type_table[] = {1,2,3,
						1,2,3,
						1,2,3,
						1,2,3,
						1,2,3,
						1,2,3,4,
						1,2,3,
						1,2,3,4};
	int len;
	int times = 0;
	char message[101] = {'\0'};
	
	while (scanf("%d", &T) != EOF)
	{
		gets(message);
		for (i = 1; i <= T; i++) {
			gets(message);
			len = strlen(message);
			for (j = 0; j < len; j++) {
				if (message[j] >= 'a' && message[j] <= 'z') times += type_table[message[j]-'a'];
				else if (message[j] == ' ') times++;
			}
			printf("Case #%d: %d\n", i, times);
			times = 0;
		}
	}
	return 0;
}