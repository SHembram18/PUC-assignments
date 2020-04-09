//PROGRAM:TO CONVERT DECIMAL TO ITS BINARY ,OCTAL,HEX_DECIMAL
//FILE:assign7_1.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:27/09/19
	#include<stdio.h>
	#include<math.h>
	
	int main()
	{
		int 	num,num1,ch,rem,count=0,c,b_num=0,octal=0,hex=0,i=0,j;
		char	a[100];
		printf("Enter a number:"); 
		scanf("%d",&num);
		printf("\nEnter your choice:\n1-Binary\n2-octal\n3-Hexa_decimal\n");
		scanf("%d",&ch);
		num1=num;
		switch(ch)
		{
			case 1:
				while(num!=0)
				{
					rem=num%2;
					c=pow(10,count);
					b_num+=rem*c;
					num/=2;
					count++;
				}
				printf("\nThe binary of %d is =%d",num1,b_num);
				break;
			case 2:
				while(num!=0)
				{
					rem=num%8;
					c=pow(10,count);
					octal+=rem*c;
					num/=8;
					count++;
				}
				printf("\nThe octal of %d is =%d",num1,octal);
				break;
			case 3:
				while(num!=0)
				{
					rem=num%16;
					if(rem<10)
					{
						a[i]=48+rem;
						i++;
					}
					else
					{
						a[i]=55+rem;	
						i++;
					}
					num/=16;
				}
				for(j=i-1;0<=j;j--)
					printf("\n%c",a[j]);
			}
		}

	
