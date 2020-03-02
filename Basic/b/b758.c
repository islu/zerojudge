#include <stdio.h>

int main() {
	int hh, mm;
	scanf("%d%d", &hh, &mm);
	hh+= 2;
	mm+= 30;
	if (mm >= 60) {
		hh += 1;
		mm -= 60;
	}
	if (hh >= 24) hh -= 24;
	if (hh < 10) {
		if (mm < 10) printf("0%d:0%d", hh, mm);
		else printf("0%d:%d", hh, mm);
	}
	else {
		if (mm < 10) printf("%d:0%d", hh, mm);
		else printf("%d:%d", hh, mm);
	}
	return 0;
}