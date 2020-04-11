//PROGRAM   :NO. of vowels present in a string
//FILE      :assign12_2.c
//CREATED BY:SANTOSH HEMBRAM
//DATED     :01-11-19

	#include<stdio.h>
	int main()
	{
		char s[100];
		int i,vowel=0;

		printf("Enter any string-");
		scanf("%[^\n]",s);

		printf("\nview the  string-");
		printf("%s",s);
		
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I' ||s[i]=='O'||s[i]=='U')
				
				vowel++;
		}
		printf("\n%d vowels present in the string",vowel);
		return 0;
	}
