#include <stdio.h>

int main()
{
	int n,i,a[10],max;

	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d\t",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("%d",max);
	
	return 0;
}
