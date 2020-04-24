#include <stdio.h>
#include <string.h>

char s[1000001];
int main() {
	int T;
	int i, j;
	while (scanf("%d ", &T) != EOF) {
		int len = 0;
		for (i = 0; i < T; i++) {
			long long int ans = 0, temp = 0;
			gets(s);
			len = strlen(s);
			for (j = 0; j < len; j++) {
				if('0'<=s[j] && s[j]<='9') temp = temp*10 + (s[j]-'0');
				else if (s[j] == '+') {
					ans += temp;
					temp = 0;
				}
			}
			printf("%lld\n", ans+temp);
		}
	}
	return 0;
}