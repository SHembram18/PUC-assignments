//PROGRAM   :FIND AREA OF TRIANGLE,RECTANGLE,CIRCLE,SQUARE	
//FILE      :assign4_3.c
//CREATED BY:santosh hembram
//DATED     :19/09/19

	#include<stdio.h>
	#include<math.h>
	int main()
	{
		int ch;
		float area,length,breadth,r,a,s,s1,s2,s3;
		printf("Enter your choice:\n1-Area of rectangle\n2-Area of circle\n3-Area of square\n4-Area of triangle\n: ");
		scanf("%d",&ch);
		switch(ch)	
		{
			case 1:
				printf("Enter length and breadth:");
				scanf("%f%f",&length,&breadth);
				area=length*breadth;
				printf("\nThe area of the rectangle is :%f",area);
				break;
			case 2:
				printf("Enter the value of r:");
				scanf("%f",&r);
				area=(M_PI)*r*r;
				printf("\nThe area of circle is :%f",area);
				break;
			case 3:
				printf("Enter the value of a:");
				scanf("%f",&a);
				area=a*a;
				printf("\nThe area of square is :%f",area);
				break;
			case 4:
				printf("Enter the sides of triangle:");
				scanf("%f%f%f",&s1,&s2,&s3);
				s=(s1+s2+s3)/2;
				area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
				printf("\nThe area of square is :%f",area);
				break;
			default:
				printf("\nPlz enter a valid choice");
		}
	}
