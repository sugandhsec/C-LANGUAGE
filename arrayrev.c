#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;
	char size;
	int l;
	
	for(i=0;i<5;i++)
	{
		 printf("Enter %d value\n",i);
		scanf("%d\n",&a[i]);
	}
	printf("Original Arrya\n");
	
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("\nArray in reverse order\n");
	
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	
	
	getch();
}
