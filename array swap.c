#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	if(n%2==0)
	{
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i=i+2)
	{
		int temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
else
{
	printf("not");
}
	return 0;
}
