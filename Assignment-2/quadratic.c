//quadratic equation
	#include<stdio.h>
	#include<math.h>
	int main()
	{
		float a,b,c,x,x1,d;
		printf("Enter the value of a,b,c respectievely:");
		scanf("%f%f%f",&a,&b,&c);
		
		d=(b*b)-4*a*c;
		if(d>0)
		{
			x=(-b+sqrt(d))/(2*a);
			x1=(-b-sqrt(d))/(2*a);
			printf("x=%f and x1=%f",x,x1);
		}
			else if(d==0)
			{
				x=x1=-b/(2*a);
				printf("x=x1=%f",x);
			}
		else
			printf("\nd<0,so it is an imaginary roots");
	}
		
