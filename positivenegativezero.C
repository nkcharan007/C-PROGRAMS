/*To find the number either positive,negative,zero*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("\n Enter the number:");
scanf("%d",&a);
if(a>0)
printf("\n The number is positive");
else if(a==0)
printf("\n The number is zero");
else
printf("\n The number is negative");
getch();
}