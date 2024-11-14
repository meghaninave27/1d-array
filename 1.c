#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter size of array:");
	scanf("%d ",&n);
	int a[n],i,sum=0;
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("sum is %d ",sum/n );
}
