#include<stdio.h>
#include<conio.h>
void main()
{
int num,count=0;
clrscr();
printf("Enter the number:");
scanf("%d",&num);
while(num!=0)
{
count++;
num=num/10;
}
printf("\n The total digits in given number is %d",count);
getch();
}