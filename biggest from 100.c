#include<stdio.h>
#include<conio.h>

void main()
{
int number;
printf("Enter an integer number\n");
scanf ("%d", &number);
if ( number < 100 )
printf("our number is smaller than 100\n\n");
else
printf("Your number contains more than two digits\n");
}
