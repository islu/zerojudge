#include <stdio.h>
#include <string.h>

struct Homework {
	char name[50];
	int days;
};

int main()
{
	int T;
	while (scanf("%d ", &T) != EOF)
	{
		int c;
		for (c = 1; c <= T; c++) {
			int N, D, i;
			char name[50];
			scanf("%d", &N);
			struct Homework h[N];
			for (i = 0; i < N; i++)
				scanf("%s%d", h[i].name, &h[i].days);

			scanf("%d", &D);
			scanf("%s", name);
			
			for (i = 0; i < N; i++) {
				if (strcmp(name, h[i].name) == 0) break;
			}
			
			printf("Case %d: ", c);
			if (h[i].days <= D) printf("Yesss\n");
			else if (h[i].days <= D+5) printf("Late\n");
			else printf("Do your own homework!\n");
		}
	}
	return 0;
}
