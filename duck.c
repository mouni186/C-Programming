#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k=0;
	printf("Enter the number:");
	scanf("%d",&i);
	j=i;
	while(i>0)
	{
		if(i%10==0)
		{
			k=1;
			break;
		}
		i/=10;
	}
	if(j>0 && k==1)
	{
		printf("The given number is a duck number");
	}
	else
	{
		printf("The given number is not a duck number");
	}
	getch();
	}
