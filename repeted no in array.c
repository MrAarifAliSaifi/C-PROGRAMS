#include<stdio.h>
int main()
{
	int a[10],j,i;
	printf("PLEASE ENER THE ELEMENTS OF THE A ARRAY");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<9;j++)
		{
			if(a[i]==a[j])
			{
				printf("\t%d",a[j]);
			}
		}
	}
	
	
}
