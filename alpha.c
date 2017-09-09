#include<stdio.h>
#include<conio.h>
char ch;
printf("enter any character");
scanf("%c",&ch);
if((ch>=60&&ch<=90)!!(ch>=97&&ch<=122))
{
printf("the character is alphabet");
}
else
{
printf("the character is not alphabet");
}
getch();
}
