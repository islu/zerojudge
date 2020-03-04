#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char str[1000];
	while (gets(str)) {
		int ans = 0;
		int part = 0;
		int len = strlen(str);
		int i;
		for (i = 0; i < len; i++) {
			if ('0'<=str[i] && str[i]<='9') {
				if (part==0 && i!=0) {
					if (str[i-1]==' ') part = part*10 + (str[i]-'0');
				}
				else if (part==0 && i==0) part = part*10 + (str[i]-'0');
				else if (part!=0) part = part*10 + (str[i]-'0');
			}
			else if (str[i] == ' ') {
				ans += part;
				part = 0;
			}
			else part = 0;
		}
		printf("%d\n", ans+part);
	}
	return 0;
}