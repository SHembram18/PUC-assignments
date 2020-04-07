#include<stdio.h>
	int main()
	{
	         int a,b;
	         printf("Enter the value of a and b:");
          	scanf("%d%d",&a,&b);
          	printf("\nbefore swapping the value of a and b id %d %d ",a,b);
          	a+=b;
          	b=a-b;
           	a-=b;
          	printf ("\nafter swappimg the value of a and b is %d %d", a,b);
          	 return 0;
	}
