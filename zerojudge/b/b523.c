#include <stdio.h>
#include <string.h>

char name[500][10001] = {'\0'};
int main() {
	int top = 0;
	int i;
	while (gets(name[top]) != 0) {
		int appeared = 0;
		for (i = 0; i < top; i++) {
			if (strcmp(name[i], name[top]) == 0) appeared++;
		}
		if(appeared) printf("YES\n");
		else {
			printf("NO\n");
			top++;
		}
	}
	return 0;
}