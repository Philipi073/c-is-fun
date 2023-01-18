/*Without Macro */
#include <stdio.h>
int main(void)
{
	int arr[10], i;

	for (i = 0; i < 10; i++)
	{
		printf("Enter the index of the array %d", i);
		scanf("%d", &arr[i]);
	}
	printf("\n Array elements are as follows:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}
