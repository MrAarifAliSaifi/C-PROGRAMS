#include<stdio.h>
int main()
{
	int i,m,n,flag=0;
	printf("PLEASE ENTER THE NUMBER TO CHECKED");
	scanf("%d",&n);
	m=n/2;
	if(n==0||n==1)
	{
		printf("NUMBER IS NOT PRIME");
		
	}
	 else 
	{
		for(i=2;i<=m;i++)
		{
		
	     	if(n%i==0)
		     {
		     	flag=1;
	         }
	    }  
	}
	     if(flag==1)
	      printf("NUMBER IS NOT PRIME");	
	      else
	      printf("NUMBER IS  PRIME");
	      
		
}

