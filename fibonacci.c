#include <stdio.h>
int main(void)
{
      int n,a=0,b=1,t,i;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          t=a+b;
          a=b;
          b=t;
          printf("%d",a);
      }
	return 0;
}
