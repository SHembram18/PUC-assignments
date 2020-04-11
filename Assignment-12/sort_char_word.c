//PROGRAM   :Sort the characters of the word in acessending order
//FILE	    :assign12_7
//CREATED BY:Santosh Hembram
//DATED     :01-11-19

	#include<stdio.h>
	#include<string.h>
	int main()	
	{
		int i,j,l=0;
		char s[20],temp;
		printf("Enter a word-");
		scanf("%[^\n]",s);
		
		printf("\nView the word-");
		printf("%s",s);
		l=strlen(s);

		for(i=0;i<l;i++)
			for(j=i+1;j<l;j++)
				if(s[i]>s[j])
				{
					temp=s[i];
					s[i]=s[j];
					s[j]=temp;
				}
			printf("\nAfter sorting-");
			printf("%s",s);
	}	
		
		
		
