#include <stdio.h>
int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
		return n * fact(n - 1);
}
int main(void)
{
	int n;
	printf("Enter the number");
	scanf("%d", &n);
	printf("the factorial of %d is %d", n, fact(n));
}
