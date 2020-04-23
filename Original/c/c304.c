#include <stdio.h>
#include <string.h>

int main() {
	char num[50];
	int ans[50]={0};
	int len;
	int i;
	while (scanf("%s", num) != EOF) {
		len = strlen(num);
		for (i = 0; i < len; i++) {
			ans[i] = num[i]-'0' + num[len-1-i]-'0';
		}
		for (i = 0; i <= len; i++) {
			ans[i+1] += ans[i] / 10;
			ans[i] = ans[i] % 10;
		}
		for (i = 49; i > 0; i--) {
			if (ans[i] != 0) break;
		}
		for (; i >= 0; i--) {
			printf("%d", ans[i]);
		}
		for (i = 49; i > 0; i--) {
			ans[i] = 0;
		}
		printf("\n");
	}
	return 0;
}