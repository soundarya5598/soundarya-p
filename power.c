#include<stdio.h>
int main()
{
int base,exp,i,a=1;
printf("enter the number of base");
scanf("%d",base);
printf("enter the number of exponent");
scanf("%d",exp);
for(i=1;i<=exp;i++)
{
a=a*base;
}
printf("\n%dthe power of a  number is",a);
return 0;
}
