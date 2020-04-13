/*
 * PROGRAM:Input a number & perform various operation using the inputed number by using the functions
 * FILE:assign15_2.c
 * CREATED BY:Santosh Hembram
 * DATED:11/11/19
 */
	#include<stdio.h>
	
	void div_by_seven(int num)
	{
		if((num%2!=0) && (num%7==0))
			printf("%d is an odd number and divisible by 7\n",num);
		else if((num%2!=0) && (num%7!=0))
			printf("%d is an odd number but not divisble by 7\n",num);
		else if((num%2==0) && (num%7==0))
			printf("%d is not an odd number but divisble by 7\n",num);
		else
			printf("%d is not an odd number & not divisble by 7\n",num);
	}
	void fibonacci(int num)
	{
		int sum=0,f0=0,f1=1;

		if(f0==num || f1==num)
			printf("%d is a part of fibonacci series\n",num);
		else
		{
			while(sum<num)
			{
				sum=f0+f1;
				f0=f1;
				f1=sum;
			}
			if(sum==num)
				printf("%d is a part of fibonacci series\n",num);
			else
				printf("%d is not a part of fibonacci series\n",num);
		}
	}
	void perfect(int num)
	{
		int i,result=0;

		for(i=1;i<=num-1;i++)
		{
			if(num%i==0)
				result+=i;
		}
		if(result==num)
			printf("%d is a perfect number\n",num);
		else
			printf("%d is not a perfect number\n",num);
	}
	void prime(int num)
	{
		int i,point=0;
		
		for(i=2;i<=(num/2);i++)
			if(num%i==0)
			{
				point=1;
				break;
			}
		if(num==1)
			printf("1 is not a prime number\n");
		else if(point==0)
			printf("%d is a prime number\n",num);
		else
			printf("%d is not a prime number\n",num);
	}
	void binary(int num)
	{
		int rem,temp,binary=0,place=1;

		temp=num;
		while(temp)
		{
			rem=temp%2;
			binary+=rem*place;
			place*=10;
			temp/=2;
		}
		printf("The binary number of %d is %d\n",num,binary);
	}
	void power(int num)
	{
		long int i,result=1;
		int power;
		
		printf("Enter the power:");
		scanf("%d",&power);

		for(i=1;i<=power;i++)
			result*=num;

		printf("%d to the power %d is %ld\n",num,power,result);
	}
	void check_digit(int num)
	{
		int digit,temp,rem;
		
		printf("\nWhich digit you want to search?\n");
		scanf("%d",&digit);

		temp=num;
		while(temp)
		{
			rem=temp%10;
			if(rem==digit)
			{
				printf("%d is present in %d\n",digit,num);
				break;
			}
			temp/=10;
		}
		if(temp==0)
			printf("%d is not present in %d\n",digit,num);
	}
	void reverse(int num)
	{
		int temp,rem,reverseNum=0;
		
		temp=num;
		while(temp)
		{
			rem=temp%10;
			reverseNum=reverseNum*10+rem;
			temp/=10;
		}
		printf("The reverse of %d is %d\n",num,reverseNum);
	}
	void pallindrome(int num)
	{
		int rem,temp,reverseNum=0;
		
		temp=num;
		while(temp)
		{
			rem=temp%10;
			reverseNum=reverseNum*10+rem;
			temp/=10;
		}
		if(num==reverseNum)
			printf("%d is a pallindrome\n",num);
		else
			printf("%d is not pallindrome\n",num);
	}
	void single_digit(int num)
	{
		int temp,rem,sum=0,count=0;
		
		temp=num;
		START:
			while(temp)
			{
				rem=temp%10;
				sum+=rem;
				count++;
				temp/=10;
			}
			if(count!=1)
			{
				count=0;
				temp=sum;
				sum=0;
				goto START;
			}
			else
				printf("%d after reduction to a single digit is now %d\n",num,sum);
	}
	int main()
	{
		int num;
		printf("Enter a number:-\n");
		scanf("%d",&num);

		printf("Multiple operations----\n");
		check_digit(num);
		power(num);
		single_digit(num);
		pallindrome(num);
		reverse(num);
		binary(num);
		prime(num);
		perfect(num);
		fibonacci(num);
		div_by_seven(num);

		return 0;
	}

