#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("\n Enter the number of row");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=(2*n-1);j++)
		{
			if(j>=n+1-i && j<= n-1+i) //for(j>=6-i && j<= 4+i
			{
				printf("%d",k);
				(j>=n)?k--:k++;
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
