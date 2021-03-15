#include<stdio.h>
#include<math.h>
	 int catalan(int n)
	{
		int num;
		 int res=0;
		if(n<=1)
		return 1;
     for(num=0;num<n;num++)
     {
     	res+=catalan(num)*catalan(n-num-1);
	 }
	 return res;
}
	 int main()
	 {
	 	int n;
	  printf("Enter the number:");
      scanf("%d",&n);
	 printf("catalan number is %d",catalan(n));
	 getch();
}
