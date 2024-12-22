#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,s,d,c=0,k=0,i,j,g;
	scanf("%d%d%d",&a,&b,&s);
	for(i=s;i>0;i=i/10)
	{
		d=i%10;
		c++;
	}
	int n=pow(10,c);
	for(i=a;i<=b;i++)
	{
		for(j=i;j>0;j=j/c)
		{
			g=j%c;
			if(g==s)
			{
				printf("%d",i);
			}
		}
		g=0;
	}
    return 0;
}
