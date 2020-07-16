#include<stdio.h>
#include<conio.h>

void main()
{
	char gen;
	int yos;
	char qul[10];
	
	printf("Enter Your Gender(M or F):\n Enter Your years of service:\nEnter your Qualification(G or PG):\n");
	scanf("%c %d %s",&gen,&yos,qul);
	
	printf("\nYour Gender is %c",gen);
	printf("\nYour Years of Service is %d",yos);
	printf("\nYour qualification is %s",qul);
	if(gen=='M' && yos>=10 && strcmp(qul,"PG")==0)
	{
		printf("\n**Your Salary Is 15000 Rs.**");
	}
		
	else if(gen=='M'&&yos>=10&&strcmp(qul,"G")==0)
	{
		printf("\n**Your Salary Is 10000 Rs.**");
	}
	
	else if(gen=='M'&&yos<10&&strcmp(qul,"PG")==0)
	{
		printf("\n**Your Salary Is 10000 Rs.**");
	}
	
	else if(gen=='M'&&yos<10&&strcmp(qul,"G")==0)
	{
		printf("\n**Your Salary Is 7000 Rs.**");
	}
	
	else if(gen=='F'&&yos>=10&&strcmp(qul,"PG")==0)
	{
		printf("\n**Your Salary Is 12000 Rs.**");
	}
	else if(gen=='F'&&yos>=10&&strcmp(qul,"G")==0)
	{
		printf("\n**Your Salary Is 9000 Rs.**");
	}
	
	else if(gen=='F'&&yos<10&&strcmp(qul,"PG")==0)
	{
		printf("\n**Your Salary Is 10000 Rs.**");
	}	
	else if(gen='F'&&yos<10&&strcmp(qul,"G")==0)
	{
		printf("\n**Your Salary Is 6000 Rs.**");
	}
	else
	{
		printf("\nWRONG INPUT GIVEN ");
	}
	
}
