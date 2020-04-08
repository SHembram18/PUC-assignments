//PROGRAM   :TO CHECK ENTERED KEY VOWEL OR CONSONANT
//FILE      :assign4_2.c
//CREATED BY:SANTOSH HEMBRAM
//DATED     :19/09/19
	#include<stdio.h>
	int main()
	{
		char ch;
		printf("Entyer a character-");
		scanf("%c",&ch);
		switch(ch>=65 && ch<=90 || ch>=97 && ch<=122)
		{
			case 0:
				printf("it is not an alphabet");
				break;
			case 1:
				switch(ch)
				{
					case'a':
						ch=='a';
						printf("vowel");
						break;
					case'A':
						ch=='A';
						printf("vowel");
						break;
					case'e':
						ch=='e';
						printf("vowel");
						break;
					case'E':
						ch=='E';
						printf("vowel");
						break;
					case'i':
						ch=='i';
						printf("vowel");
						break;
					case'I':
						ch=='I';
						printf("vowel");
						break;
					case'o':
						ch=='o';
						printf("vowel");
						break;
					case'O':
						ch=='O';
						printf("vowel");
						break;
					case'u':
						ch=='u';
						printf("vowel");
						break;
					case'U':
						ch=='U';
						printf("vowel");
						break;
					default:
						printf("consonant");
					}
				}
			}
