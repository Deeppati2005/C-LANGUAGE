//store 20 random values into an 1d array and perform sort operation
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sort(int a[],int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%4d",a[i]);
	}
	printf("\n");
}
int main()
{
	int a[20],i,x,n=20;
	for(i=0;i<20;i++)
	{
		x=rand()%90+10;
		a[i]=x;
	}
	printf("before sorting:\n");
	show(a,n);
	printf("\nAfter sorting:\n");
	sort(a,n);
	show(a,n);
}

