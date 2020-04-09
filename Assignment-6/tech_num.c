//PROGRAM:TO CHECH AN INTEGER AS TECH NUMBER OR NOT
//FILE:assign6_8.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:23/-09/19
	#include<stdio.h>
	int main()
	{
		int count=0,num,num1,i,rem,last_half=0,place=1,techn;
		printf("Enter a number:");
		scanf("%d",&num);
		num1=num;
		while(num!=0)
		{
			num/=10;
			count++;
		}
		if(count%2==0)
		{
			num=num1;
			i=1;
			while(i<=(count/2))
			{
				rem=num1%10;
				last_half=(rem*place)+last_half;
				place=place*10;
				num1=num1/10;
				i++;
			}
			techn=(num1+last_half)*(num1+last_half);
			if(num==techn)
			
				printf("%d is tech number",num);
			
			else
				
				printf("%d is not tech number",num);
			
		}
		else
			printf("Enter an even number of digit");
	}

		
