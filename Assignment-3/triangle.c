//PROGRAM   :TO READ THE THREE SIDE OF A TRIANGLE & THEN DISPLAY IT AS EQUILATERAL,ISOSCELES,SCALENE 
//FILE      :triangle.c
//CREATED BY:santosh hembram
//DATED     :14/09/19

	#include<stdio.h>
	int main()
	{
		int a,b,c;
		printf("Enter the value of a,b,c-");
		scanf("%d%d%d",&a,&b,&c);
		if((a+b>c)||(a+c>b)||(c+b>a))
		{
			if(a==b && b==c && a==c)
				printf("\nThe triangle is an equilateral");
			else if((a==b)||(b==c)||(a==c))
				printf("\nThe triangle is an isosceles");
			else if(a!=b && b!=c && c!=a)
				printf("\nThe triangle is scalene");
		}
		else
			printf("\ntriangle law not satisfy");
	}
			
