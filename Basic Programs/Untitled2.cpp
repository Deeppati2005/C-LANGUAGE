#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sort(int a[10][10],int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[i][j]>a[i][j+1])
			{
				t=a[i][j];
				a[i][j]=a[i][j+1];
				a[i][j+1]=t;
			}
		}
	}
}
void show(int a[10][10],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int i,j,a[10][10],x;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			x=rand()%90+10;
			a[i][j]=x;
		}
	}
	printf("The matrix is:\n");
  	show(a,10);
	sort(a,10);
	printf("The sorted matrix is:\n");
  	show(a,10);
	sort(a,10);
}

