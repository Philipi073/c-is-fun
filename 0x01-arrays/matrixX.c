#include <stdio.h>
#define MAX 50
int main(void)
{
	int a[MAX][MAX], b[MAX][MAX], product[MAX][MAX];
	int arows, acolumns, brows, bcolumns;
	int i, j, k;
	int sum = 0;

	/* part 1 */
	printf("Enter the rows and colums of a: ");
	scanf("%d %d", &arows, &acolumns);


	prinf("Enter the elements of matrix a: \n");
	for (i = 0; i < arows; i++)
	{
		for (j = 0; j < acolumns; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("Enter the rows and columns of b: ");
	scanf("%d %d", &brows, &bcolums);
	if (brows != acolums)
	{
		printf("matrixes a and b can not be multiplied");
	}
	else
	{
		printf("Enter the elements of matrix b: \n");
		for (i = 0; i < brows; i++)
		{
			for (j = 0; j < bcolums; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}
	}
	printf("\n");
	
	for (i =0; i < arows;i++)
	{
		for (j = 0; j < bcolums; j++)
		{
			for (k = 0; k < brows; k++)
			{
				sum += a[i][k] * b[k][j];
			}
			product[i][j] = sum;
			sum = 0;
		}
	}
	prinf("Resultant matrix: \n");
	for (i = 0; i < arows; i++)
	{
		for (j = 0; j < bcolumns; j++)
		{
			printf("%d", product[i][j]);
		}
		printf("\n");
	}
	return o;





}
