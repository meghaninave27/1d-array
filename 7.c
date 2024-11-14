#include<stdio.h>
#include<conio.h>
int main()
{
	int n,max;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("max is %d",max);
}
