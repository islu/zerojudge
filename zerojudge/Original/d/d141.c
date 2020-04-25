#include <stdio.h>
#include <string.h>

int main() {
	double x1, y1, x2, y2, x3, y3;
	int n, i;
	char s[100];
	scanf("%d ", &n);
	for (i = 0; i < n; i++) {
		int flag = 0;
		gets(s);
		sscanf(s, "%lf,%lf %lf,%lf %lf,%lf", &x1, &y1, &x2, &y2, &x3, &y3);
		if ((y2-y1)/(x2-x1) == (y2-y3)/(x2-x3)) flag++;
		else if (y2-y1==0 && y2-y3==0) flag++;
		else if (x2-x1==0 && x2-x3==0) flag++;
		else if (y2==y1 && x2==x1) flag++;
		else if (y2==y3 && x2==x3) flag++;
		else if (y1==y3 && x1==x3) flag++;

		if (flag) printf("collinear\n");
		else printf("not collinear\n");
	}
	return 0;
}