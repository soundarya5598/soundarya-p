#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("before swapping%d %d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swapping%d %d",a,b);
}
