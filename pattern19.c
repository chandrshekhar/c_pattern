#include<stdio.h>
int main()
{
	int i ,j ,k,p;
	for(i=1;i<=4;i++)
	{
		k=65,p=1;
		for(j=1;j<=8;j++)
		{
			if(j>=5-i && j<= 4+i)
			{
				j<=4?printf("%c",k++):printf("%d",p++);
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
