#include <stdio.h>
int main(void) 
{
	int n,i,sum=1,c;
	scanf("%d",&n);
	n=n/2;
	c=2^i;
	for(i=0;i<=n-1;i++)
	{
	sum=sum*c;	
	}
	printf("%d",sum);
	return 0;
}
