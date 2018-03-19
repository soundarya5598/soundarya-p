#include<stdio.h>
int main()
{
  int n,i,flag=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  if(n%i==0)
  {
    flag++;
  }
  }
  if(flag==2)
  {
    printf("the number is prime");
  }
  else
  {
    printf("the number is not prime");
  }
  return 0;
}
