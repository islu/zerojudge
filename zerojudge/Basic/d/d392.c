#include <stdio.h>
#include <string.h>

int main() {
	char str[10000];
	int i;
	while (gets(str) != 0) {
		int len = strlen(str);
		long long ans = 0;
		long long part = 0;
		for (i = 0; i < len; i++) {
			if ('0'<=str[i] && str[i]<='9') part = part*10 + (str[i]-'0');
			else if (str[i] == ' ') {
				ans += part;
				part = 0;
			}
		}
		printf("%lld\n", ans+part);
	}
	return 0;
}