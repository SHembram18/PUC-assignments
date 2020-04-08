//PROGRAM:TO DISPALY A MENU FOR 5 BASIC ARITHMATIC OPERTAION
//FILE:	assign4_1.c
//CREATED BY:hembram
//DATED:19/09/19

	#include<stdio.h>
	int main()
	{
		char ch;
		int num1,num2,total;
		printf("Enter two integers:");
		scanf("%d%d",&num1,&num2);
		printf("\nEnter your choice:\n+ add\n- sub\n* mul\n%% mod\n");
		scanf("%c",&ch);
		switch(ch)
		{
			case'+':
				total=num1+num2;
				printf("%d",total);
				break;
			case'-':
				total=num1-num2;
				printf("%d",total);
				break;
			case'*':
				total=num1*num2;
				printf("%d",total);
				break;
			case'/':
				total=num1/num2;
				printf("%d",total);
				break;
			case'%':
				total=num1%num2;
				printf("%d",total);
				break;
			default:
				printf("\nEnter a valid choice");
		}
	}
