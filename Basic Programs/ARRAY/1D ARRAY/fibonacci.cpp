#include<stdio.h>
int main()
{
	int i,n,a[1000];
	printf("\nEnter the limit:");
	scanf("%d",&n);
	a[0]=0;
	a[1]=1;
		for(i=2;i<n;i++)
		{
			a[i]=a[i-1]+a[i-2];
		}
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
}
