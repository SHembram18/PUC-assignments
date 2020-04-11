//PROGRAM   :Find the specific character & its no of occurence 
//FILE      :assign12_8.c
//CREATED BY:Santosh Hembram
//DATED     :01-11-19

	#include<stdio.h>
	#include<string.h>
	int main()
	{
		int i,l=0,count=0,flag=0;
		char s[20],ch;
		
		printf("Enter a word-");
		scanf("%[^\n]",s);

		printf("\nView the word-");
		printf("%s",s);

		l=strlen(s);
		fgetc(stdin);
		printf("\nEnter the character-");
		scanf("%c",&ch);
		for(i=0;i<l;i++)
		{	
			if(ch==s[i])
			{
				count++;
				flag=1;
			}
		}
		if(flag==1)
				printf("\nThe no. of occurence of %c character is %d ",ch,count);					else 
				printf("\n %c character is not found ",ch);
			
	}
		
				
			
		
		
	
