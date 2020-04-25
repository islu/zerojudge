#include <stdio.h>

int main()
{
	long long soldier, enemy;
	while (scanf("%lld%lld", &soldier, &enemy) != EOF)
	{
		if (soldier >= enemy) printf("%lld\n", soldier-enemy);
		else if (soldier < enemy) printf("%lld\n", enemy-soldier);
	}
	return 0;
}
