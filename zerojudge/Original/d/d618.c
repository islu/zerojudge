#include <stdio.h>
#include <string.h>

int main() {
	int T;
	while(scanf("%d", &T) != EOF) {
		char ins[105];
		int i, j;
		for (i = 0; i < T; i++) {
			scanf("%s", ins);
			int len = strlen(ins);
			int state = 1;
			for (j = 0; j < len; j++) {
				switch (state) {
					case 2:
						if(ins[j]-'0' == 1) state = 1;
						break;
					case 3:
						if(ins[j]-'0'==4 || ins[j]-'0'==1) state = ins[j]-'0';
						break;
					case 4:
						if(ins[j]-'0'==3 || ins[j]-'0'==1) state = ins[j]-'0';
						break;
					default:
						state = ins[j] - '0';
						break;
				}
			}
			printf("%d\n", state);
		}		
	}
	return 0;
}