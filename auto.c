#include<stdio.h>
#include<conio.h>
void main()
{
	int num,pro,res,mod;
	printf("Enter the number:");
	scanf("%d", &num);
	pro=num*num;
	while(num>0)
	{
		if(num%10 != pro%10)
		num=num/10;
		pro=pro/10;
	}
		if(num==pro)
	{
		printf("The given number is an automorphic number");
		}
		else
		{
			printf("The given number is not an automorphic number");
		}
	
	
		getch();
}
