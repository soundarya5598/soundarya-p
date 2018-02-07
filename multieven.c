#include <stdio.h>

int main()
{
	int n,m,s;
	scanf("%d%d",&n,&m);
	s=n*m;
	if(s%2==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
