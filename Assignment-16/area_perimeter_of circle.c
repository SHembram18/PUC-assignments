/*
 * PROGRAM:Find area & perimeter of a circle using call-by-reference
 * FILE:assign16_2.c
 * CREATED BY:Santosh Hembram
 * DATED:22/11/19
 */
	#include<stdio.h>
	
	void operation(float p,float *area,float *perimeter)
	{
		*area=3.14*p*p;
		*perimeter=2*3.14*p;
	}
	int main()
	{
		float radius,area,perimeter;
		
		printf("Enter the radius of the circle:\n");
		scanf("%f",&radius);
	
		operation(radius,&area,&perimeter);

		printf("\nArea of circle = %f\n",area);
		printf("\nPerimeter of circle = %f\n",perimeter);

		return 0;
	}
