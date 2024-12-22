#include<stdio.h>
int main()
{
    int n;
	float da,hrf,pf,gt,t;	
	scanf("%d",&n);
	if(n>5000)
	{
		da=n*0.05;
	}
	else
	{
		da=n*0.025;
	}
	if(n>9000)
	{
		hrf=n*0.08;
	}
	else
	{
		hrf=n*0.04;
	}
	if(n>3000)
	{
		pf=n*0.02;
	}
	else
	{
		pf=n*0.01;
	}
	if(n>10000)
	{
		gt=n*0.10;
	}
	else
	{
		gt=n*(5%100);
	}
	t=n+hrf+da-pf-gt;
	printf("salary%f",t);
	return 0;
	
}
