#include<stdio.h>
#include<conio.h>
int main()
{
	int n,min;
	printf("enter n:");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
		
	}
	min=a[i];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("min is %d",min);
}
