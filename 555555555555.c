#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	while(n!=0)
	{
		n=n%10;
	printf("%d",n);
	}

	return 0;
}
