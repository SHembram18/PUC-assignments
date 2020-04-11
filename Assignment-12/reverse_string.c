//PROGRAM:To reverse  a string without using library function
//FILE:assign12_3.c
//CREATED BY:SANTOSH HEMBRAM
//DATED:1-11-19

	#include<stdio.h>
	int main()
	{
		int length=0,i,j;
		char s[100],temp;

		printf("Enter any string-");
		scanf("%[^\n]",s);

		printf("\nView the string-");
		printf("%s",s);

		for(i=0;s[i]!='\0';i++)
			length++;
		for(i=0,j=length-1;i<length/2;j--,i++)
		{
			temp=s[i];
			s[i]=s[j];
			s[j]=temp;
		
		}
		printf("\nAfter reverse the string-");
		printf("\n%s",s);
	}
	
