#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],b[n],c[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("enter b[%d]",i);
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		
		c[i]=a[i]+b[i];
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("sum is %d\n",c[i]);
	}
	
	
}
