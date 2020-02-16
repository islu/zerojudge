#include <stdio.h>

int main()
{
	int n, f;
	int i, j;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &f);
		long long area, ani, env;
		long long bouns = 0;
		
		for (j = 0; j < f; j++) {
			scanf("%lld%lld%lld", &area, &ani, &env);
			bouns += area * env;
		}
		
		printf("%lld\n", bouns);
	}
	
	return 0;
}
