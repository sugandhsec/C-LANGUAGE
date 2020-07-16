#include<stdio.h>
#include<conio.h>

void main()
{
	int cyr,jyr,syr;
	int bonus;
	
	printf("Enter Current year:");
	scanf("%d",&cyr);
	
	printf("Enter Joined year:");
	scanf("%d",&jyr);
	
	syr=cyr-jyr;
	
	if(syr>3)
	{
		bonus=2500;
		printf("Bonus is given amount %d",bonus);
	}	
	
}
