/* Reversing the given number*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
{
int num,r,rdigit=0;
printf("\n To the Reverse the number:---");
printf("\n\n");
printf("\n Enter the number:");
scanf("%d",&num);
while(num!=0)
{
r=num%10;
rdigit=rdigit*10+r;
num=num/10;
}
printf("\n The number is = %d",rdigit);
}
getch();
}