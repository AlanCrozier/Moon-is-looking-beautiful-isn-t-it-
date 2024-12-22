#include<stdio.h>
int main()
{
	int no1,i,rev=0,d;
	scanf("%d",&no1);
	for(i=no1;i>0;i/10)
	{
		d=d%10;
		rev=rev*10+d;
}
    printf("%d",rev);
	return 0;
}
