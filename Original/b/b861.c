#include <stdio.h>
#include <string.h>

int main() {
	int T;
	int i;
	char s[35000];
	while (scanf("%d ", &T) != EOF) {
		for (i = 0; i < T; i++) {
			gets(s);
			int len = strlen(s);
			int chi = 0, tu = 0, counter = 0;
			int a = 0, b = 0;
			while (counter < len) {
				if (s[counter] == 'c') {
					chi++;
					counter += 4;
				}
				else if (s[counter] == 't') {
					tu++;
					counter += 3;
				}
				if (tu > chi) a++;
			}
			if (chi > tu) b++;
			if (a && b) printf("chi pu tao bu tu pu tao pi, bu chi pu tao dao tu pu tao pi\n");
			else if (a) printf("bu chi pu tao dao tu pu tao pi\n");
			else if (b) printf("chi pu tao bu tu pu tao pi\n");
			else printf("chi pu tao tu pu tao pi\n");
		}
	}
	return 0;
}