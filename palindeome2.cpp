#include<stdio.h>
int main()
{

  int n,m,ne,num=0;
  printf("PLEASE ENTER THE NO:");
  scanf("%d",&n);
  	m=n;
  while(n>=1)
  {
  
  	num=n%10;
  	ne=ne*10+num;
  	n=n/10;
  }
  if(m==ne)
  printf("NO IS PALINDROME");
  else
  printf(" NO IS NOT PALINDROME");
  
}
  
  
