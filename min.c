#include <stdio.h>

int main()
{
	int n,i,a[20],min;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	printf("%d",min);
	
	return 0;
}
