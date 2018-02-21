#include<stdio.h>
int main()
{
	int a=1,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	a=a*2;
	if(a==n)
	printf("yes");
	}
return 0;
}
