/*
 * PROGRAM:Overwrite 10 characters from a specified position
 * FILE:assign20_3.c
 * CREATED BY:Santosh Hembram
 * DATED:18/12/19
 */
	#include<stdio.h>
	int main(int argc,char *argv[])
	{
		FILE *fs;
		char ch;
		int i;
		
		unsigned int po;
		if(argc!=2)
		{
			fprintf(stderr,"\nInsufficient number of arguments!!!\n");
			return 1;
		}
		fs=fopen(argv[1],"r+");
		if(!fs)
		{
			printf("\nFile creation error!!\n");
			perror("\nOPEN FILE");	
			return 1;		
		}
		printf("\nEnter the position you want to overwrite:");
		scanf("%d",&po);
		fflush(stdin);
		getc(stdin);
		if(fseek(fs,po,SEEK_SET)!=-1)
		{
			for(i=1;i<=10;i++)
			{
				ch=fgetc(stdin);
				fflush(stdin);
				getc(stdin);
				fputc(ch,fs);
			}
		}
		printf("Overwritng is sucessful!!\n");
		fclose(fs);
		return 0;
	}
				
				
		
