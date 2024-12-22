#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a=checkpower(n);
	printf("%d",a);
}
int checkpower(int x)
{
	int c=0;
	if(x%2!=1)
	{
	while(x!=1)
	{
		if(x%2==1)
		{
			c=0;
			break;
		}
		x=x/2;
		c++;
	}
    }
	else
	{
		c=0;
	}
	return c;
}