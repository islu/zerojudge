#include <stdio.h>

int main() {
	int hh, mm;
	scanf("%d%d", &hh, &mm);
	if (hh>7 && hh<17) printf("At School\n");
	else if (hh==7 && mm>=30) printf("At School\n");
	else printf("Off School\n");
	return 0;
}