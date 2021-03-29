#include<stdio.h>
int main()
{
	int i ,j,k=1,p=1;
	for(i=1;i<=7;i++)
	{
				p=p+k-1;
		for(j=1;j<=7;j++)
		{
			if(j>=5-k && j<=3+k)
			{
				printf("%d",p);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		i<4?k++:k--;

	}
	return 0;
}
