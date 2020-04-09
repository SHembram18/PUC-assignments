//PROGRAM:To convert a binary number to its eqivalent decimal number
//FILE:assign7_2.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:27/09/19
	#include<stdio.h>
	#include<math.h>
	int main()
	{
		int 	b_num,d_num=0,temp,bd,exp=0;
		printf("Enter a binary number:");
		scanf("%d",&b_num);
			temp=b_num;
			while(b_num)
			{
				bd=b_num%10;
				d_num+=bd*pow(2,exp);
				b_num/=10;
				exp++;
			}
			printf("\nThe decimal of %d is =%d",temp,d_num);
		return 0;
	}
		
		
