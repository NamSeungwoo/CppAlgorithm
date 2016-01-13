#include <stdio.h>

#define NUM_DISH 4

int win(int dishes[])
{
	int num_coins, i, j;

	for (i = 0; i < NUM_DISH; i++)
	{
		num_coins = dishes[i];

		for (j = 1; j <= num_coins; j++) {
			dishes[i] = num_coins - j;

			if (win(dishes) == 0) {
				dishes[i] = num_coins;
				return 1;
			}
		}
		dishes[i] = num_coins;
	}
	return 0;
}

int main() {
	int dishes[NUM_DISH], i;

	for (i = 0; i < NUM_DISH; i++)
		scanf("%d", &dishes[i]);
	if (win(dishes))
		printf("Winning state\n");
	else
		printf("Not winning state!\n");
	return 0;
}