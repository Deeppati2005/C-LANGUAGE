#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=9;i+=2)
	{
		for(j=i;j<=9;j+=2)
		{
			printf("%2d",j);
		}
		
		for(j=1;j<i;j+=2)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
}
