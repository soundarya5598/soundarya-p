#include <stdio.h>
#include<string.h>

int main(void)
{
	char a[50];
	int sum=0, i;
	scanf("%s",&a);
	for(i=0;a[i]!='/0';i++)
	{
	sum++;
	}
	printf("%d",sum);
	return 0;
}
