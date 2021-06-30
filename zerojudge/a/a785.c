#include <stdio.h>
#include <string.h>

int main() {
	char w[500];
	int i;
	while(scanf("%s", w) !=EOF) {
		if(w[0]=='E' && w[1]=='N' && w[2]=='D') break;
		int len=strlen(w);
		int index=0;
		for(i=0;i<len;i++) {
			if(w[i]=='-') {
				index=i;
				break;
			}
		}
		for(i=0;i<=index-2;i++) printf("%c", w[i]);
		switch(w[index-1]) {
			case 'a':
				switch(w[index+1]) {
					case 'a':
					case 'e':
					case 'y':
						printf("a");
						break;
					case 'i':
						printf("ai");
						break;
					case 'o':
						if(w[index+2]=='u') index++;
						printf("w");
						break;
					case 'w':
						printf("w");
						break;
				}
				break;
			case 'e':
				switch(w[index+1]) {
					case 'a':
					case 'y':
						printf("y");
						break;
					case 'e':
					case 'i':
						printf("ei");
						break;
					case 'o':
						if(w[index+2]=='u') index++;
						printf("ou");
						break;
					case 'w':
						printf("w");
				}
				break;
			case 'o':
				switch(w[index+1]) {		
					case 'y':
						printf("w");
						break;
					case 'i':
						printf("oi");
						break;
					case 'e':
						printf("ou");
						break;
					case 'o':
						if(w[index+2]=='u') index++;
						printf("ou");
						break;
					case 'a':
					case 'w':
						printf("w");
				}
				break;
		}
		for(i=index+2;i<len;i++) printf("%c", w[i]);
		printf("\n");
	}
	return 0;
}
