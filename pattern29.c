#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				printf("%d ",k);
				k=k+5-j;
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
