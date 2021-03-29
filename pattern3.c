#include<stdio.h>
int main()
{
	int i,j,k,n=5;
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=9;j++)
		{
			if(j>= 6-i && j<= 4+i && k)
			{
				printf("*");
				k=0;	
			}
			else
			{
				printf(" ");
				k++;
			}
		}
		printf("\n");
	}
	return 0;
}
