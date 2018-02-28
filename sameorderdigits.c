#include <stdio.h>

int main(void) {
	int rem,n,c,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	while(sum!=0)
	{
	c=sum%10;
	printf("%d",c);
	sum=sum/10;
	}
	return 0;
}
