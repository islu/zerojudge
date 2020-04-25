#include <stdio.h>
#include <string.h>

int main() {
	char str[1000];
	int i;
	while (gets(str) != 0) {
		long long stack[1000] = {0};
		int index = 0;
		int len = strlen(str);
		long long part = 0;
		long long ans = 0;
		for (i = 0; i < len; i++) {
			if ('0'<=str[i] && str[i]<='9') {
				part = part*10 + (str[i]-'0');
			}
			else if (str[i]==' ' && part!=0) {
				stack[index] = part;
				part = 0;
				index++;
			}
			else {
				switch (str[i]) {
					case '+':
						ans = stack[index-2]+stack[index-1];
						stack[index-2] = ans;
						index-= 1;
						break;
					case '-':
						ans = stack[index-2]-stack[index-1];
						stack[index-2] = ans;
						index-= 1;
						break;
					case '*':
						ans = stack[index-2]*stack[index-1];
						stack[index-2] = ans;
						index-= 1;
						break;
					case '/':
						ans = stack[index-2]/stack[index-1];
						stack[index-2] = ans;
						index-= 1;
						break;
					case '%':
						ans = stack[index-2]%stack[index-1];
						stack[index-2] = ans;
						index-= 1;
						break;
					default:
						break;
				}
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}