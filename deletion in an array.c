#include<stdio.h>
int main()
{
	int x=0,i,p,n;
	scanf("%d%d",&n,&p);
	int a[n];
	int b[x];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(p==a[i])
		{
			continue;
		}
		else
		{
			b[i]=a[i];
			x++;
		}
	}
	for(i=0;i<x;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
