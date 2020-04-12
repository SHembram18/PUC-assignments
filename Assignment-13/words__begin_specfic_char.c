//PROGRAM   :Find no. of words begins with specific character
//FILE      :assign13_1.c
//CREATED BY:Santosh Hembram
//DATED     :04-11-19

	#include<stdio.h>
	#include<string.h>
	int main()
	{
		char s[100],ch;
		int i,count=0,l=0;

		printf("Enter a string-");
		scanf("%[^\n]",s);

		printf("\nView the string-");
		printf("%s",s);

		l=strlen(s);
		fgetc(stdin);
		printf("\nEnter the character-");
		scanf("%c",&ch);
		for(i=0;i<l;i++)
		{
			if(i==0 && s[i]==ch)
				count++;
			if(s[i-1]==' ' && s[i]==ch )
				count++;
			
		}
			printf("\nThere are %d words begins with specific character",count);

	}
