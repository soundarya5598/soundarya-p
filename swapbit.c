#include<stdio.h>
int main()
{
	int k,s;
	scanf("%d%d",&k,&s);
	printf("\nbefore swapping%dand%d",k,s);
	k=k^s;
	s=k^s;
	k=k^s;
	printf("\nafter swapping%dand%d",k,s);
	return 0;
}
