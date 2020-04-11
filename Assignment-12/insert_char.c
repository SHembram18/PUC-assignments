//PROGRAM   :Input a word & insert a character particular position of the word
//FILE      :assign12_4.c
//CREATED BY:SANTOSH HEMBRAM
//DATED     :1-11-19

	#include<stdio.h>
	#include<string.h>
	int main()
	{
		int i,l=0,po;
		char s[20],ch;
		
		printf("Enter a word-");
		scanf("%[^\n]",s);

		printf("\nview the string-");
		printf("%s",s);

		l=strlen(s);		
		printf("\nEnter the character & the postion you want to insert-");
		fgetc(stdin);
		scanf("%c%d",&ch,&po);
		for(i=l-1;(i>=po-1);i--)	
		
			s[i+1]=s[i];
		
			s[po-1]=ch;
			s[l+1]='\0';
		printf("%s",s);
	}	
