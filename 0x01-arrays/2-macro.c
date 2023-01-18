/*With Macro*/
#include <stdio.h>
#define N 5
int main(void)
{
	int arr[N], i;

	for (i = 0; i < N; i++)
	{
		printf("The index is %d: ", i);
		scanf("%d", &arr[i]);
	}
	printf("\nThe contents of the arrays are: \n");
	for (i = 0; i < N; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}
