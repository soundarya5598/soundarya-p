#include <stdio.h>
#include<string.h>
int main()
{
	char a[50];
	int i,count=0;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' &&  a[i]<='9')
		count++;
	}
	printf("%d",count);
	return 0;
}
