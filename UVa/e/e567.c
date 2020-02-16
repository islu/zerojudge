#include <stdio.h>
#include <string.h>
#define SIZE 50

int recognize_cmd(char*);

int main()
{
	int T;
	while (scanf("%d", &T) != EOF)
	{
		int i;
		for (i = 0; i < T; i++) {
			int n;
			scanf("%d ", &n);
			
			int j;
			char cmd[SIZE];
			int position = 0;
			int logs[n];
			
			for (j = 0; j < n; j++) {
				gets(cmd);
				
				int result = recognize_cmd(cmd);
				if (result == -1) logs[j] = -1;
				else if (result == -2) logs[j] = 1;
				else logs[j] = logs[result-1];
				
				position += logs[j];
			}
			
			printf("%d\n", position);
		}
	}
	
	return 0;
}

int recognize_cmd(char *cmd) {
	int nBuffer;
	if (cmd[0] == 'L') return -1;
	else if (cmd[0] == 'R') return -2;
	else {
		sscanf(cmd, "%*s %*s %d", &nBuffer);
		return nBuffer;
	}
}
