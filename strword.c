#include <stdio.h>

int main(void) {
	char a[50];
	int i,count=1;
	scanf("%[^\n]",&a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
		printf("%d",count);
	return 0;
}