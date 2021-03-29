#include<stdio.h>
int main()
{
	int i,j,k=1,p;
	for(i=1;i<=5;i++)
	{
		p=1;
		for(j=1;j<=6;j++)
		{
			if(j>=4-k && j<=3+k) 
			{
				printf("%d",p);
				
			    if(j<=3)
			   		p++;
				if(j>=3)
					p--;	
			}
			else
			{
				printf(" ");
			}
		
		}
		printf("\n");
		i<3?k++:k--;
	}
	return 0;
}
