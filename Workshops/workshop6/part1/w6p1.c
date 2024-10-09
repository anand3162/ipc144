/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
Full Name  : Anand Krishna Anil Kumar
Student ID#: 152227229
Email      : akanilkumar@myseneca.ca
Section    : ZCC

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_NUMBER_OF_ITEMS 10
#define MIN_NUMBER_OF_ITEMS 1

int main(void)
{	
	const double MAX_INCOME = 400000.00;
	const double MIN_INCOME = 500.00;

	const double MIN_ITEM_COST = 100.00; 

	const int MAX_PRIORITY = 3;
	const int MIN_PRIORITY = 1;

	const char NOFINANCE = 'n';
	const char NEEDFINANCE = 'y';

	double income;
	int numOfitems,i;

	double cost[MAX_NUMBER_OF_ITEMS];
	int priority[MAX_NUMBER_OF_ITEMS];
	char finance[MAX_NUMBER_OF_ITEMS];

	double total_cost;

printf("+--------------------------+\n");
printf("+   Wish List Forecaster   |\n");
printf("+--------------------------+\n");
printf("\n");

do
{
    printf("Enter your monthly NET income: $");
    scanf("%lf", &income);

	if(income<MIN_INCOME)
	{
		printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n", MIN_INCOME);
	}

	if(income>MAX_INCOME)
	{
		printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n",MAX_INCOME);
	}
	printf("\n");
}
while((income<MIN_INCOME) || (income > MAX_INCOME));

do
{
	printf("How many wish list items do you want to forecast?: ");
	scanf("%d",&numOfitems);

	if (numOfitems < MIN_NUMBER_OF_ITEMS)
	{
		printf("ERROR: List is restricted to between 1 and 10 items.\n");
	}

	if (numOfitems > MAX_NUMBER_OF_ITEMS)
	{
		printf("ERROR: List is restricted to between 1 and 10 items.\n");
	}
	printf("\n");	
}
while((numOfitems<MIN_NUMBER_OF_ITEMS) || (numOfitems>MAX_NUMBER_OF_ITEMS));


for( i= 0; i < numOfitems; i++){
	printf("Item-%d Details:\n", i+1);

	do
		{
			printf("   Item cost: $");
			scanf("%lf",&cost[i]);
		
			if (cost[i]<MIN_ITEM_COST)
			{printf("      ERROR: Cost must be at least $100.00\n");}
		}
	while(cost[i]<MIN_ITEM_COST);


	do
		{	
			printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
			scanf("%d", &priority[i]);
			
			if (priority[i]<MIN_PRIORITY)
			{
				printf("      ERROR: Value must be between 1 and 3\n");
			}

			if (priority[i]>MAX_PRIORITY)
			{
				printf("      ERROR: Value must be between 1 and 3\n");
			}
	} 
	while ((priority[i]<MIN_PRIORITY)||(priority[i]>MAX_PRIORITY));
	

	do
		{
			printf("   Does this item have financing options? [y/n]: ");
			scanf(" %c", &finance[i]);

			if ((finance[i]!= NOFINANCE) && (finance[i]!= NEEDFINANCE))
			{
				printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
			}

		}
	while(finance[i]!= NOFINANCE && finance[i]!= NEEDFINANCE);
	
	total_cost+=cost[i];

	printf("\n");
}
printf("Item Priority Financed        Cost\n");
		printf("---- -------- -------- -----------\n");

		for(i=0; i< numOfitems; i++){
		printf("%3d  %5d    %5c    %11.2lf\n", i+1,priority[i],finance[i],cost[i]);
		}

		printf("---- -------- -------- -----------\n");
		printf("                      $%11.2lf\n\n", total_cost);

		printf("Best of luck in all your future endeavours!\n\n");

    return 0;
}

/*
    HELPER: printf formatting statements....
	=========================================
	
    Step #7:
		printf("Item Priority Financed        Cost\n");
		printf("---- -------- -------- -----------\n");
		
		printf("%3d  %5d    %5c    %11.2lf\n", ...
		

	Step #8:
		printf("---- -------- -------- -----------\n");
		printf("                      $%11.2lf\n\n", ...

*/