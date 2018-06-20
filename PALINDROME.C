#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char a[100],b[100];
clrscr();
printf("\n Enter the palindrome:");
gets(a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
printf("\n Enter palindrome is correct");
else
{
printf("\n Enter palindrome is wrong");
}
getch();
}