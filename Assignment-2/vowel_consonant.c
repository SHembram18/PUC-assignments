//vowel or consonant

	#include<stdio.h>
	int main()
	{
		char ch;
		printf("Enter a charcter-");
		scanf("%c",&ch);

		if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
		{
			printf("\nThe entered character %c is an alphabet",ch);
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			
	     		
				printf("\n%c is vowel",ch);
			
			else
				printf("\n%c is consonant",ch);
		}
		else
			printf("\nThe entered character %c is not an alphabet",ch);
	}
