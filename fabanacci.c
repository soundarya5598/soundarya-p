#include<stdio.h>
int main()
{
int n,i,x,y,z;
printf("enter the number");
scanf("%d",n);
for(i=1;i<=n;i++)
{
z=x+y;
x=y;
y=z;
printf("%d",z);
}
return 0;
}

