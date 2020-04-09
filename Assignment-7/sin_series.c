//PROGRAM:To print the sin series upto nth terms
//FILE:assign7_3.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:27/09/19
	#include<stdio.h>
	int main()
	{
		int	n_terms,a;
		float	sine,sine_degree,term,sum_term;
		printf("Enter the value for sine:");
		scanf("%f",&sine);
		printf("\nEnter number of terms:");
		scanf("%d",&n_terms);
		sine_degree=sine;
		sine_degree*=3.14159/180;
		term=sine_degree;
		sum_term=sine_degree;
		for(a=1;a<=n_terms;a++)
		{
			term=(term*(-1)*sine_degree*sine_degree)/(2*a*(2*a+1));
			sum_term+=term;
		}
		printf("\nThe value of sin(%f)=%f",sine,sum_term);
		return 0;
	}
		
