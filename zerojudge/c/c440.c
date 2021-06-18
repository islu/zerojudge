#include <stdio.h>
#include <string.h>

int main() {
	char s[100005];
	while (scanf("%s", s) != EOF) {
		long long count;
		int len, i, left, right;
		len = strlen(s);
		count = 0;
		left = 0;
		right = 0;
		
		for (i = 0; i < len; i++) {
			if (s[i] == 'Q') right++;
		}
		for (i = 0; i < len; i++) {
			if (s[i] == 'Q') left++;
			else if (s[i] == 'A') count += left * (right-left);
		}
		printf("%lld\n", count);
	}
	return 0;
}