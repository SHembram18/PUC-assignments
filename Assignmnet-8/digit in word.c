/*
 * PROGRAM : to print the digits of the number in the word
 * FILE : assign 8_5.c
 * CREATED BY : Santosh Hembram
 *  DATED : 21-10-19
 *  */
  #include<stdio.h> 
  int main()
  {
	int	num,dg,a[100],i,j=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num!=0)
	{
		dg=num%10;
		a[j++]=dg;
		num/=10;
	}
	for(i=j-1;i>=0;i--)
	{
		switch(a[i])
		{
		    case 0:
			   printf("ZERO\t");
			   break;
		    case 1:
			   printf("ONE\t"); 	
			   break;
		    case 2:
			   printf("TWO\t");
		           break;
		    case 3:
		           printf("THREE\t"); 
		           break;
		    case 4:
			   printf("FOUR\t");
		           break;
		    case 5:
			   printf("FIVE\t");
			   break;
		    case 6:
			   printf("SIX\t");
			   break;
		    case 7:
                           printf("SEVEN\t");
		           break;
		    case 8:
			   printf("EIGHT\t");
			   break;
		    case 9:
			   printf("NINE\t");
			   break;
		}
	    } 
	    return 0; 
    }
			   

