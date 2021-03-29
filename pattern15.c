#include<stdio.h>
int main()
{
	int i,j,k;
	int row;
	printf("\n Enter the number of row");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			if(j==i || j==row-i)
			{
				if(i==j)
					printf("\\");
				else
					printf("/");
			}
			else
			{
				
				printf("*");		
			}
		}
		printf("\n");
	}
	return 0;
}
