#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int b;
int c;
int sum;
int sub;
int mul;
int div;
clrscr();
printf("\nEnter the value a:");
scanf("%d",&a);
printf("\nEnter the value b:");
scanf("%d",&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("\nThe sum of a b is %d",sum);
printf("\nThe sub of a b is %d",sub);
printf("\nThe mul of a b is %d",mul);
printf("\nThe div of a b is %d",div);
getch();
}