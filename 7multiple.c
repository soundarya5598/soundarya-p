#include<stdio.h>
int main()
{
	int n,s,k;
	scanf("%d",&n);
	s=n/7;
	k=n%7;
	if(k==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
