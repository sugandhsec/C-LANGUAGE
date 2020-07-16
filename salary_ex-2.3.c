#include<stdio.h>
#include<conio.h>

void main()
{
	int bassal,hra,da,grsal;
	
	printf("ENTER BASIC SALARY");
	scanf("%d",&bassal);
	
	if(bassal<1500)
	{
		hra=(bassal*10)/100;
		da=(bassal*90)/100;
	}
	else
	{
		hra=500;
		da=(bassal*98)/100;
	}
	grsal=bassal+hra+da;
	printf("Gross salary=%d",grsal);
}
