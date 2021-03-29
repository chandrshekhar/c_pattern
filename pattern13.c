#include<stdio.h>
int main()
{
	int i,j,k;
	int row;
	printf("\n Enter the row number");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		k=row-i;
		for(j=1;j<=row;j++)
		{
			if(j<=row+1-i)
			{
				printf("%d",k--);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
