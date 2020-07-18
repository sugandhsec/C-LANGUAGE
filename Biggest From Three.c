#include<stdio.h>
#include<conio.h>
void main()
{
   int num1,num2,num3;
   
   //Ask user to input any three integer numbers
   printf("\nEnter value of num1, num2 and num3:");
   //Store input values in variables for comparsion
   scanf("%d %d %d",&num1,&num2,&num3);

   if((num1>num2)&&(num1>num3))
      printf("\n Number1 is greatest--%d",num1);
   else if((num2>num3)&&(num2>num1))
      printf("\n Number2 is greatest--%d",num2);
   else
      printf("\n Number3 is greatest--%d",num3);
   return 0;
}
