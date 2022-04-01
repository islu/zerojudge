#include <stdio.h>

int main() {
	/*
	printf("These knockoff Flags cost 900 each, enter desired quantity\n");
	int account_balance = 1100;
	int number_flags = 0;
	// Case 01. number_flags = -2147483758
	// Case 02. number_flags = 60000000
	scanf("%d", &number_flags);
	if (number_flags > 0) {
		// printf("%d\n", number_flags); // Case 01. number_flags = 2147483647 ...interger overflow
	    int total_cost = 0;
	    total_cost = 900 * number_flags;
	    printf("\nThe final cost is: %d\n", total_cost); // Case 02. total_cost = -1834574848 ...interger overflow
	    if (total_cost <= account_balance) {
	        account_balance = account_balance - total_cost;
	    	printf("\nYour current balance after transaction: %d\n\n", account_balance);
	    } else {
	        printf("Not enough funds to complete purchase\n");
	    }
	}
	*/

	// printf("-2147483758\n"); // Case 01. But "WA" needs input interger
	printf("60000000\n"); // Case 02. "AC"

	return 0;
}
