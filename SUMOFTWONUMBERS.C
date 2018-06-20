/*Findind the sum the digits*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
{
int num;
int r;
int sum=0;
printf("\n Finding the sum given two number\n\n");
printf("\n Enter the number:");
scanf("%d",&num);
while(num!=0)
{
r=num%10;
sum=sum+r;
num=num/10;
}
printf("\n = %d",sum);
getch();
}
}