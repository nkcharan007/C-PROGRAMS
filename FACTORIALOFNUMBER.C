/* To find the factorial of number*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,fact=1;
clrscr();
printf("\n Enter the number to find the factorial:");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*i;
printf("\n The factorial number is %d",fact);
getch();
}