#include<stdio.h>
int main()
{
	int fac=1,i,n;
	printf("PLEASE ENTER THE NO:");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		fac=fac*i;
		
	}
	printf("THE FACTORIAL OF THE NO IS:%d",fac);
}
