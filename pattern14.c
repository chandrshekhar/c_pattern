#include<stdio.h>
int main()
{
	int i,j,k=5,v;
	for(i=1;i<=9;i++)
	{
		v=1;
		for(j=1;j<=5;j++)
		{
			if(j>=k)
			{
				printf("%d",v++);			
			}
			else
			{
				printf(" ");
			}
		}
		i<5?k--:k++;
		printf("\n");
	}
	return 0;
}
