#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=100;i++)
	{
		if(i%7==0||i%10==7)
		sum=sum+i;
	}
	printf("sum=%d",sum);
}
