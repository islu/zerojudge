#include <stdio.h>
#include <string.h>

int main() {
	char str[200];
	int len;
	int i;
	while(scanf(" %[a-z END]", str) !=EOF) {
		if(str[0] == 'E' && str[1] == 'N' && str[2] == 'D') break;
		int count_space = 0;
		int store[100] = {0};
		int j = 0;
		len = strlen(str);
		for(i=0;i<len;i++) {
			if(str[i] == ' ') {
				count_space++;
				store[j] = i+1;
				j++;
				
			}
		}
		if(count_space == 0) {
			printf("%c ", str[0]-32);
			printf("%s\n", str);
		}
		else {
			printf("%c", str[0]-32);
			for(j=0;j<count_space;j++) {
				printf("%c", str[store[j]]-32);
			}
			printf(" ");
			j = store[j-1];
			for(j;j<len;j++) {
				printf("%c", str[j]);
			}
			printf("\n");
		}
	}
	return 0;
}
