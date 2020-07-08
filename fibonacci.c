#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,n;
	printf("PLEASE ENTER THE NO:\n");
	scanf("%d",&n);
	printf("%d\t%d",a,b);
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
	}
}
