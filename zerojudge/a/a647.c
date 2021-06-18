#include <stdio.h>

const double capaity = 1e-6;

int main()
{
	int goods, val, valn;
	scanf("%d", &goods);
	while (goods--)
	{
		scanf("%d%d", &val, &valn);
		double rat = (double)(valn - val) / val * 100;
		if (rat >= 0.0) printf("%.2lf%% ",rat+capaity);
		else printf("%.2lf%% ",rat-capaity);
		if (rat >= 10.0 || rat <= -7.0) printf("dispose\n");
		else printf("keep\n");
 }
		return 0;
}