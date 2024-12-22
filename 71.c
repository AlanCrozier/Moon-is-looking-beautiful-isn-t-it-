#include<stdio.h>
int main()
{
	int no1,i,sqr,sum=0,d;
	scanf("%d",&no1);
	sqr=no1*no1;
	while(sqr!=0)
	{
		d=sqr%10;
		sum=sum+d;
		no1=no1/10;
}
    if(sqr==no1)
    {
    	printf("neon no.");
	}
	else
	{
		printf("not");
	}
	return 0;
}
