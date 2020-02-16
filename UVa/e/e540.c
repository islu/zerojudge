#include <stdio.h>
#include <string.h>

int main() {
	int T;
	while ( scanf("%d", &T) != EOF )
	{
		int i, j, len, score, con;
		char s[100];
		for (i = 0; i < T; i++) {
			
			scanf("%s", s);
			len = strlen(s);
			score = 0;
			con = 0;
			
			for (j = 0; j < len; j++) {
				if (s[j] == 'O') {
					con++;
					score += con;
				}
				else if (s[j] == 'X')
					con = 0;
			}
			
			printf("%d\n", score);
		}
	}
	return 0;
}