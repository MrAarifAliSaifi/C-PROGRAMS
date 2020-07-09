#include<stdio.h>
int main()
{
	int a[10],b[10],i;
	printf("PLEASE ENER THE ELEMENTS OF THE A ARRAY");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		b[i]=a[i];
	}
	printf("\n\tTHE ELEMENTS OF THE ARRAY B ARE:");
	for(i=10;i>0;i--)
	printf("\n\t%d",b[i]);
	
	
}
