#include <stdio.h>
#include <string.h>

int main()
{
	int N;
	int i, j, k;
	char s1[50];
	char s2[50];
	char t;
	while (scanf("%d", &N) != EOF)
	{
		for (i = 0; i < N; i++) {
			int ans[60] = {0};
			int head = 0, tail = 0;
			
			scanf("%s %s", s1, s2);
			int len1 = strlen(s1);
			int len2 = strlen(s2);
			
			for (j = 0; j < len1/2; j++) {
				t = s1[j];
				s1[j] = s1[len1-1-j];
				s1[len1-1-j] = t;
			}
			
			for (j = 0; j < len2/2; j++) {
				t = s2[j];
				s2[j] = s2[len2-1-j];
				s2[len2-1-j] = t;
			}
			
			for (j = 0; j < len1; j++) {
				if (s1[j] != '0') {
					head = j;
					break;
				}
			}
			for (k = len1-1, j=0; k >= head; k--, j++) {
				ans[j] +=  s1[k]-'0';
			}
			
			head = 0;
			
			for (j = 0; j < len2; j++) {
				if (s2[j] != '0') {
					head = j;
					break;
				}
			}
			for (k = len2-1, j = 0; k >= head; k--, j++) {
				ans[j] +=  s2[k] - '0';
			}
			
			head = 0;
			
			for (j = 0; j < 50; j++) {
				if(ans[j]>=10) {
					ans[j+1] += ans[j]/10;
					ans[j]%=10;
				}
			}
			for (j = 0; j < 50; j++) {
				if (ans[j] != 0) {
					head = j;
					break;
				}
			}
			for (j = 49; j >= 0; j--) {
				if (ans[j] != 0) {
					tail = j;
					break;
				}
			}
			
			for (j = head; j <= tail; j++)
				printf("%d", ans[j]);
			printf("\n");
		}
	}
	return 0;
}