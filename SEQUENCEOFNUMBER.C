/* Finding the sequence of the number*/
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
int sum=0;
int i;
clrscr();
printf("\n Enter the number to added in sequence:");
scanf("%d",&n);
for(i=1;i<n;i++)
sum=sum+i;
printf("\nThe sum of number is %d",sum);
getch();
}