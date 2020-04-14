*
 * PROGRAM:Command line argument program that will rename an exisiting file like mv command
 * FILE:assign20_2.c
 * CREATED BY:Santosh Hembram
 * DATED:18/12/19
 */
	#include<stdio.h>
	void main(int argc,char *argv[] )
	{
		FILE *fp,*fp1;
		char c;
		fp=fopen(argv[1],"r");
		fp1=fopen(argv[2],"w");
		while((c=getc(fp))!=EOF)
		{
			putc(c,fp1);
		}
		fcloseall();
		remove(argv[1]);
	}
