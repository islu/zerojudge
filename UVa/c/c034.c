#include <stdio.h>
#include <string.h>

int main() 
{
	char s[500];
	int n[501] = {0};
	int i;
	while (scanf("%s", s) != EOF)
	{
		int len = strlen(s);
		if (len == 1 && s[0] == '0') break;

		for (i = 0; i < len; i++) {
			n[i] += s[len-i-1]-'0';
			if (n[i] >= 10) {
				n[i+1] += n[i] / 10;
				n[i] %= 10;
			}
		}
	}
	for (i = 0; i < 501; i++) {
		if (n[i] >= 10) {
			n[i+1] += n[i] / 10;
			n[i] %= 10;
		}
	}
	for (i = 500; i >= 0; i--) {
		if (n[i] != 0) break;
	}
	if (i == 0) printf("0\n");
	else {
		for (i; i >= 0; i--) {
			printf("%d", n[i]);
		}
		printf("\n");
	}
	return 0;
}