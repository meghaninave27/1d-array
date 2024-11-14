#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		sum=sum+a[i];
	}
	printf("sum is %d",sum);
}
