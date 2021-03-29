#include<stdio.h>
int main()
{
	int i ,j,k;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=9;j++)
		{
			if(j>=i && j<= 10-i)
			{
				printf("%d",k);
				k=k+2;
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
