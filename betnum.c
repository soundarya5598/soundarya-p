#include <stdio.h>

int main(void) 
{
	int n,l,f;
	scanf("%d",&n);
	scanf("%d%d",&f,&l);
	if((n>f)&&(n<l))
	{
		printf("yes");
	}
	else
    {
    	printf("no");
    }
	return 0;
}
