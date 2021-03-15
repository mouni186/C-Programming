#include<stdio.h>
#include<math.h>
void main()
{
	int begin,end,i,j,k,l,mod;
	int a_nr=i-1,a[a_nr],c_nr[a_nr],curr_c_nr;
	printf("Enter the begin number:");
	scanf("%d", &begin);
	printf("Enter the ending number:");
	scanf("%d",end);
	for(i=begin;i<end;i++)
	{
		for(j=0;j<a_nr;j++)
		{
			a[j]=j;
		}
	for(k=0;k<a_nr;k++)	
	{
		for(l=0;l<i;l++)
		{
			curr_c_nr=curr_c_nr*a[k];
		}
		mod=curr_c_nr=curr_c_nr%i;
		if(mod==a[k]&&mod!=a[k])
		{
			c_nr[k]=i;
		}
	}
	}
	getch();
	
}
