#include<stdio.h>
int main()
{
int a,b;
printf("enter the number");
scanf("%d%d",&a,&b);
printf("before swapping%d and %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping%d and %d",a,b);
return 0;
}
