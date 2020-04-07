//convert 
	#include<stdio.h>
	#include<ctype.h>
	int main()
	{
		char ch1,ch2,ch3;
		printf("Enter three alphabet:");
		scanf("%c%c%c",&ch1,&ch2,&ch3);
		printf("\n%c%c%c",ch1,ch2,ch3);

		ch1=toupper(ch1);
		ch2=ch2|32;
		ch3=ch3^32;

		printf("\n%c%c%c",ch1,ch2,ch3);
	}
