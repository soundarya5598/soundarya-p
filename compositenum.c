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
    printf("no");
  }
  else
  {
    printf("yes");
  }
  return 0;
}
