#include<stdio.h>
int main()
{
	int i,j,k,p;
	for(i=1;i<=5;i++)
	{
		k=i;
		p=i-1;
		for(j=1;j<=5;j++)
		{
			if(j>=6-i)
			{
				printf("%d",k);
				k=k+p;
				
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
