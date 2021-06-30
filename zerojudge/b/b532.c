#include <stdio.h>
#include <string.h>

int main() {
	int n;
	int i, j;
	char str[1000];
	while(scanf("%d", &n) !=EOF) {
		for(i=0;i<n;i++) {
			int stack[2]={0};
			int len;
			int k=0;
			int hold=0;
			scanf("%s", str);
			len = strlen(str);
			for(j=0;j<len;j++) {
				if('0'<=str[j] && str[j]<='9') {
					stack[k] = stack[k]*10 + (str[j]-'0');
				}
				else if(str[j]=='+' || str[j]=='-' || str[j]=='*' || str[j]=='/' || str[j]=='%') {
					hold = j;
					k++;
				}
			}
			switch(str[hold]) {
				case '+':
					printf("%d\n", stack[0]+stack[1]);
					break;
				case '-':
					printf("%d\n", stack[0]-stack[1]);
					break;
				case '*':
					printf("%d\n", stack[0]*stack[1]);
					break;
				case '/':
					printf("%d\n", stack[0]/stack[1]);
					break;
				case '%':
					printf("%d\n", stack[0]%stack[1]);
					break;
			} 
		}
	}
	return 0;
}
