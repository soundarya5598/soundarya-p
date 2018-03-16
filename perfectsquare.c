#include <stdio.h>

int main(void) {
	int k,s,c;
	scanf("%d%d",&k,&s);
	c=k*s;
	if(k==s)
	{
		printf("perfect square");
	}
	else
	{
		printf("Not a perfect square");
	}
	return 0;
}
