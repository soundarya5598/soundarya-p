#include <stdio.h>

int main()
{
	int n,m,s;
	scanf("%d%d",&n,&m);
	s=n*m;
	if(s%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
