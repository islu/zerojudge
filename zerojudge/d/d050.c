#include <stdio.h>

int main() {
	int taiwan_time;
	int usa_time;
	scanf("%d", &taiwan_time);
	usa_time = taiwan_time - 15;
	if (usa_time >= 0) printf("%d", usa_time);
	else printf("%d", usa_time+24);
	return 0;
}