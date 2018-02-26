#include <stdio.h>
int main()
{
	char a[50];
	scanf("%s",&a);
	int i,sum=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='.')
		{
			sum=sum+1;
		}
		printf("%d",sum);
	}
	return 0;
}
