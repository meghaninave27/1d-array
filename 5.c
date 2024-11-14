
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
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
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
}
