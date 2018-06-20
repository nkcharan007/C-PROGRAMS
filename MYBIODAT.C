/* C programme */
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr(); {
char name[10];
char marks[10];
char rollno[10];
char group[10];
char age[10];
printf("\n Enter your name:");
scanf("%s",name);
printf("\n Enter your group:");
scanf("%s",group);
printf("\n Enter your roll no:");
scanf("%s",rollno);
printf("\n Enter your marks in PUC:");
scanf("%s",marks);
printf("\n Enter your present age:");
scanf("%s",age);
printf("\n---***THE FOLLOWING DATA IS***---");
printf("\n Your name is %s",name);
printf("\n Your group is  %s",group);
printf("\n Your rollno is %s",rollno);
printf("\n Your marks  in PUC is %s",marks);
printf("\n Your Present age is %s",age);
}
getch();
}
