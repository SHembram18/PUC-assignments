//PROGRAM   : TO COMPUTE THE DISCOUNT & PREPARE AN INVOICE REPORT
//FILE      :   assign3_2.c
//CREATED BY:HEMBRAM
//DATED     :14/09/19
	
	#include<stdio.h>
	int main()
	{
		float pa,mc,hc,hc_dis,mc_dis,total_dis,pay;
		printf("Enter pa of mc and hc:");
		scanf("%f%f",&mc,&hc);	
		pa=mc+hc;
		if(pa>=0 && pa<=100)
		{
			mc_dis=0.00*mc;
			hc_dis=0.05*hc;
			total_dis=mc_dis+hc_dis;
			pay=pa-total_dis;
		}
		else if(pa>=101 && pa<=200)
		{
			mc_dis=0.05*mc;
			hc_dis=0.075*hc;
			total_dis=mc_dis+hc_dis;
			pay=pa-total_dis;
		}
		else if(pa>=201 && pa<=300)
		{
			mc_dis=0.075*mc;
			hc_dis=0.10*hc;
			total_dis=mc_dis+hc_dis;
			pay=pa-total_dis;
		}
		else if(pa>300)
		{
			mc_dis=0.10*mc;
			hc_dis=0.15*hc;
			total_dis=mc_dis+hc_dis;
			pay=pa-total_dis;
		}
		printf("\nYou have to pay:%f\n",pay);
	}
