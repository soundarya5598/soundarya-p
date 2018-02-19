#include<stdio.h>
#include<string.h>
int main()
{
	char a [30],b [20];
	scanf("%s",&a);
	scanf("%s",&b);
	int c,d;
	c=strlen(a);
	d=strlen(b);
	if(c>d)
	{
		printf("%s",a);
	}
	else if(d>c)
	{
		printf("%s",b);
		
	}
	else
	{
		printf("both are equal %s",a);
	}
	return 0;
}
