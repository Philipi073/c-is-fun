#include <stdio.h>
int main(void)
{
	int seen[10] = {0}; /*part one */
	int N;
	printf("Enter the number: ");
	scanf("%d", &N);

	int rem;  /* part two */
	while (N > 0)
	{
		rem = N % 10;
		if (seen[rem] == 1)
			break;
		seen[rem] == 1;
		N = N / 10;
	}

	if (N > 0)  /*part three */
		printf("Yes");
	else
		printf("No");
	printf("\n");
	return 0;
}
