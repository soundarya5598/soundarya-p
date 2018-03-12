#include <stdio.h>
int main(void)
{
      char a[30];
      int i;
      scanf("%s",&a);
      for(i=0;a[i]!='\0';i++)
      {
      	if((a[i]>'a'&&a[i]<'z')||(a[i]>'0'&&a[i]<9)
      	{
      		printf("yes");
      	}
      	else
      	{
      		printf("no");
      	}
      	
      }
	return 0;
}
