/*created on 11/10/17*/
#include<stdio.h>
#include<conio.h>
void main()
{
int choice,opt;
int sum,sub,mul,div,modular,a,b,c;
clrscr();
//int contnue;
do
{
clrscr();
printf("\n 1>Perform Addition\n 2>Peform  Subtratcion\n 3>Perform Multiplication\n 4>Perform Division\n 5>Perform Modular Divison");
printf("\n\n Enter the choice:--");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("\n Enter the number to be added:");
	printf("\n Enter the value of A:");
	scanf("%d",&a);
	printf("\n Enter the value of B:");
	scanf("%d",&b);
	sum=a+b;
	printf("\n The sum of A and B is %d",sum);
break;
case 2:
	printf("\n Enter the number to be Multiplied:");
	printf("\n Enter the value of A:");
	scanf("%d",&a);
	printf("\n Enter the value of B:");
	scanf("%d",&b);
	mul=a*b;
	printf("\n The multiplication of A and B is %d",mul);
break;
case 3:
	printf("\n Enter the number to be Subtracted:");
	printf("\n Enter the value of A:");
	scanf("%d",&a);
	printf("\n Enter the value of B:");
	scanf("%d",&b);
	sub=a-b;
	printf("\n The subtraction of A and B is %d",sub);
break;
case 4:
	printf("\n Enter the number to be Divided:");
	printf("\n Enter the value of A:");
	scanf("%d",&a);
	printf("\n Enter the value of B:");
	scanf("%d",&b);
	div=a/b;
	printf("\n The Division of A and B is %d",div);
break;
case 5:
	printf("\n Enter the number for Modular Division:");
	printf("\n Enter the value of A:");
	scanf("%d",&a);
	printf("\n Enter the value of B:");
	scanf("%d",&b);
	modular=a%b;
	printf("\n The Modular divison of A and B is %d",modular);
break;
default :
	printf("\n It is Invalid choice:");
break;

}
	printf("\n Do you want to Continue y/n:");
	opt= getch();
	}while(opt=='Y'||opt=='y');
	getch();
       }