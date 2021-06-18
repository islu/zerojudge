#include <stdio.h>
#include <string.h>

int main() {
	char str[201];
	int score = 0;
	int i;
	int true = 1;
	while (scanf("%s", str) !=EOF) {
		if (str[0]=='0' && strlen(str)==1) break;
		for (i = 0; i < strlen(str); i++) {
			if (str[i]<'A' || str[i]>'z') {
				true= 0;
				break;
			}
			else if (str[i]>='A' && str[i]<='Z') score += str[i]-64;
			else if (str[i]>='a' && str[i]<='z') score += str[i]-96;
		}
		if (true) printf("%d\n", score);
		else printf("Fail\n");
		true = 1;
		score = 0;
	}
	return 0;
}