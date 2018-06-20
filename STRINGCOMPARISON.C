#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
clrscr();
{
char a[100],b[100];
printf("\n Enter the first string:");
gets(a);
printf("\n Enter the second string:");
gets(b);
if(strcmp(a,b)==0)
{
printf("\nEnter sring is equal\n");
}
else
{
printf("\n Enter string is not equal");
}
}
getch();
}