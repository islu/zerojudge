#include <stdio.h>

int main() {
	int career;
	int lv;
	while (scanf("%d%d", &career, &lv) != EOF){
		if (career == 0) printf("%d\n" , 0);
		else if (career == 2) {
			if (lv < 8) printf("%d\n" , 0);
			else if(lv>=8 && lv<30) printf("%d\n", (lv-8)*3+1);
			else if(lv>=30 && lv<70) printf("%d\n", (lv-8)*3+2);
			else if(lv>=70 && lv<120) printf("%d\n", (lv-8)*3+3);
			else if(lv>=120 && lv<=200) printf("%d\n", (lv-8)*3+6);
		}
		else {
			if (lv < 10) printf("%d\n" , 0);
			else if(lv>=10 && lv<30) printf("%d\n", (lv-10)*3+1);
			else if(lv>=30 && lv<70) printf("%d\n", (lv-10)*3+2);
			else if(lv>=70 && lv<120) printf("%d\n", (lv-10)*3+3);
			else if(lv>=120 && lv<=200) printf("%d\n", (lv-10)*3+6);
		}
	}
	return 0;
}