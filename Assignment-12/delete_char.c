//PROGRAM   :Input a word delete a character from a particular position of thw word 
//FILE      :assign12_5.c
//CREATED BY:Santosh hembram
//DATED     :01-11-19

	#include<stdio.h>
	#include<string.h>
	int main()
	{
		int i,po,l=0;
		char s[20];

		printf("Enter a word-");
		scanf("%[^\n]",s);

		printf("\nView the word-");
		printf("%s",s);
		
		l=strlen(s);
		printf("\nEnter the position of the character that you want to delete- ");
		scanf("%d",&po);

		for(i=po;i<l;i++)
			s[i-1]=s[i];
			s[l-1]='\0';
			
			
		printf("%s",s);
	}
		
