#include <stdio.h>
#include <string.h>

int main() {
	typedef struct car{
		char brand[30];
		char color[30];
	} Car;
	int n, m;
	int i, j;
	char temp[30];
	while (scanf("%d%d", &n, &m) != EOF) {
		Car c[n];
		for (i = 0; i < n; i++)
			scanf("%s %s", c[i].brand, c[i].color);

		for (i = 0; i < m; i++) {
			scanf("%s", temp);
			if (!strcmp(temp, "brand")) {
				scanf("%s", temp);
				for (j = 0; j < n; j++) {
					if (!strcmp(temp, c[j].brand)) printf("%s %s\n", c[j].brand, c[j].color);
				}
			}
			else {
				scanf("%s", temp);
				for (j = 0; j < n; j++) {
					if (!strcmp(temp, c[j].color)) printf("%s %s\n", c[j].brand, c[j].color);
				}
			} 
		}
	}
	return 0;
}