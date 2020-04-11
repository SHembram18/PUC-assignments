//PROGRAM   :Check the word is pallindrome or not
//FILE      :assign12_6.c
//CREATED BY:Santosh Hembram
//DATED     :01-11-19

	#include<stdio.h>
	#include<string.h>	
	int main()
	{
		int i,j,k=0,l=0,check=0;
		char s[20],rev[20];

		printf("Enter a word-");
		scanf("%[^\n]",s);

		printf("\nView the word-");
		printf("%s",s);
                
	       	l=strlen(s);
		for(j=l-1,k=0;j>0,k<l;j--,k++)
			rev[k]=s[j];
		
		
		for(i=0,k=0;i<l;i++,k++)
		{
			if(s[i]==rev[k])
				check=1;	
			else
				check=0;
		}
		if(check==1)
			printf("\nThe word %s is Pallindrome",s);
		else
			printf("\nThe word %s is Not pallindrome",s);	
	}
				
	
	

		
