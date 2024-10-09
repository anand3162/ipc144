/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P1)
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

 #define MIN_YEAR 2012
#define MAX_YEAR 2022

int main(void)
{
   const int JAN = 1;
   const int DEC =12;
   
   int year, month,i;
   double mRate, eRate,sumM=0,sumE=0,sumAll=0,avgM=0,avgE=0,avgAll=0;

   printf("General Well-being Log\n");
   printf("======================\n");
   
   do
   {
   printf("Set the year and month for the well-being log (YYYY MM): ");
   scanf("%d %d", &year, &month);
   if (year < MIN_YEAR|| year>MAX_YEAR)
   {printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");}

   if (month < JAN || month > DEC)
   {printf("   ERROR: Jan.(%d) - Dec.(%d)\n",JAN,DEC);}

   }while(year < 2012 || year>2022 || month < JAN || month > DEC);

   printf("\n");
   printf("*** Log date set! ***\n");
   printf("\n");

for(i=1;i<=3;i++)
{
   switch (month)
   {
    case 1:
    printf("%d-JAN-%02d\n",year,i);
    break;
    case 2:
    printf("%d-FEB-%02d\n",year,i);
    break;
    case 3:
    printf("%d-MAR-%02d\n",year,i); 
    break;
    case 4:
    printf("%d-APR-%02d\n",year,i);
    break;
    case 5:
    printf("%d-MAY-%02d\n",year,i);
        break;
    case 6:
    printf("%d-JUN-%02d\n",year,i);
        break;
    case 7:
    printf("%d-JUL-%02d\n",year,i);
        break;
    case 8:
    printf("%d-AUG-%02d\n",year,i);
        break;

    case 9:
    printf("%d-SEP-%02d\n",year,i);
        break;

    case 10:
    printf("%d-OCT-%02d\n",year,i);
        break;

    case 11:
    printf("%d-NOV-%02d\n",year,i);
        break;

    case 12:
    printf("%d-DEC-%02d\n",year,i);
        break;
    }
    do //morning
    {
    printf("   Morning rating (0.0-5.0): ");
    scanf("%lf",&mRate);
    if ( mRate<0.0 || mRate>5.0 ) 
    {printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");}
    }
    while( mRate<0.0 || mRate>5.0 );

    do //evening
    {    
    printf("   Evening rating (0.0-5.0): ");
    scanf("%lf",&eRate);
    if ( eRate<0.0 || eRate>5.0)
    {printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");}
    }
    while( eRate<0.0 || eRate>5.0);
     sumM=sumM + mRate;
    sumE=sumE + eRate;
    printf("\n");
  
}


   
    sumAll = sumAll + sumM + sumE;
    avgM=sumM/(i-1);
    avgE=sumE/(i-1);
    avgAll=sumAll/(i+2);


printf("Summary\n");
printf("=======\n");
printf("Morning total rating: %.3lf\n",sumM);
printf("Evening total rating:  %.3lf\n",sumE);
printf("----------------------------\n");
printf("Overall total rating: %.3lf\n",sumAll);
printf("\n");
printf("Average morning rating:  %.1lf\n",avgM);
printf("Average evening rating:  %.1lf\n",avgE);
printf("----------------------------\n");
printf("Average overall rating:  %.1lf\n",avgAll);
printf("\n");


       return 0;
}