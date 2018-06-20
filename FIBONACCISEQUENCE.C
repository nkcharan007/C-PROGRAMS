#include<stdio.h>
#include<conio.h>
void main()
{
int n,f1=0,f2=1,i,temp;
clrscr();
printf("enter temp number/n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(i<=1)
temp=i;
else
{
temp=f1+f2;
f1=f2;
f2=temp;
}
printf("%d/n",temp);
}
}
