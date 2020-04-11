 //PROGRAM   :To find no. of words present in a string
//FILE      :assign12_1.c
//CREATED BY:SANTOSH HEMBRAM
//DATED     :01/11/19

	#include<stdio.h>
	int main()
	{		
		int count=1,i;
		char s[100];
	
		printf("Enter any string-");
		scanf("%[^\n]",s); 
		
		for(i=0;s[i]!='\0';i++)
		
			if(s[i]==32)
			
 		
		count++;
		printf("\n%d words present in the string",count);
	}
