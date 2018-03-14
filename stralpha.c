#include <stdio.h>
int main(void) {
	char a[50];
	int i,c=0;
	scanf("%s",&a[i]);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
		{
		c++;
		}
	}
		if(c!=0)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
		return 0;
}
