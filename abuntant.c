#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0,result;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		}
		result=sum-n;
	printf("The abundance of a given number is %d \n",result);
	getch();
	}
