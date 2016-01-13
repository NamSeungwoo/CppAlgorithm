#include <stdio.h>

/*
#define NUM_DISH 4
#define MAX 50

typedef struct move_t{
	int win;
	int dish;
	int get;
} move_t;


int solved[MAX + 1][MAX + 1][MAX + 1][MAX + 1];
move_t memo[MAX + 1][MAX + 1][MAX + 1][MAX + 1];

void print_arr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int all_is(int arr[], int n, int bit)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != bit)
			return 0;
	}
	return 1;
}

move_t best_move_nim(int dishes[])
{
	int num_coins, i, j, l=0;
	move_t p;

	if (solved[dishes[0]][dishes[1]][dishes[2]][dishes[3]])
		return memo[dishes[0]][dishes[1]][dishes[2]][dishes[3]];

	solved[dishes[0]][dishes[1]][dishes[2]][dishes[3]] = 1;

	for (i = 0; i < NUM_DISH; i++)
	{
		num_coins = dishes[i];

		for (j = 1; j <= num_coins; j++) {
			dishes[i] = num_coins - j;
			p = best_move_nim(dishes);

			if (p.win == 0) {
				dishes[i] = num_coins;
				return memo[dishes[0]][dishes[1]][dishes[2]][dishes[3]] =  { 1, i, j };
			}
		}
		dishes[i] = num_coins;
	}

	for (i = 0; i < NUM_DISH; i++) {
		if (dishes[i] > 0) {
			l = i;
			break;
		}
	}



	return memo[dishes[0]][dishes[1]][dishes[2]][dishes[3]] = { 0, l, 1 };
}

int main() {
	
	int user_dish, user_get, dishes[NUM_DISH], i;
	move_t my_move;

	printf("input num coins: ");
	for (i = 0; i < NUM_DISH; i++)
		scanf_s("%d", &dishes[i]);
	
	printf("State: ");
	print_arr(dishes, NUM_DISH);

	while (1) {
		printf("Your turn: ");
		scanf_s("%d %d", &user_dish, &user_get);
		dishes[user_dish] -= user_get;
		printf("State: ");
		print_arr(dishes, NUM_DISH);

		if (all_is(dishes, NUM_DISH, 0)) {
			printf("You win\n");
			break;
		}

		my_move = best_move_nim(dishes);
		if (my_move.win == 1)
			printf("I will win!\n");
		printf("My turn: %d %d\n", my_move.dish, my_move.get);
		dishes[my_move.dish] -= my_move.get; 
		printf("State: ");
		print_arr(dishes, NUM_DISH);

		if (all_is(dishes, NUM_DISH, 0)) {
			printf("I win\n");
			break;
		}

	}

	return 0;
}
*/
/*
#define N 10

void print_decimal(int a, int b)
{
	int i;
	int decimal[N], remain[N];

	printf("%d.", a / b);
	for (i = 0; i < N; i++)
	{
		a %= b;
		remain[i] = a;
		a *= 10;
		decimal[i] = a / b;
	}
	for (i = 0; i < N; i++)
		printf("%d", decimal[i]);
	printf("\n");
}

void print_decimal3(int a, int b)
{
	int i;
	int decimal[N], remain[N];

	printf("%d.", a / b);
	for (i = 0; i < N; i++)
	{
		a %= b;
		for (int j = 0; j < i; j++)
		{
			if (a == remain[j])
			{
				for (int t = 0; t < j; t++)
				{
					printf("%d", decimal[t]);
				}
				printf("(");
				for (int t = j; t < i; t++)
				{
					printf("%d", decimal[t]);
				}
				printf(")");
				return;
			}
		}
		remain[i] = a;
		a *= 10;
		decimal[i] = a / b;
	}
	for (i = 0; i < N; i++)
		printf("%d", decimal[i]);
	printf("\n");
}


int main()
{
	int a, b;

	printf("input a,b: ");
	scanf_s("%d %d", &a, &b);

	print_decimal3(a, b);
}
*/

#define MAX_DIGIT_LEN 1024

typedef struct {
	int sign;
	int digit_len;
	int int_len;
	char digit[MAX_DIGIT_LEN];
} number_t;
