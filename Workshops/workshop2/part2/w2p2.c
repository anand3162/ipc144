/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P2)
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

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    

    double price_small, price_medium, price_large;
    int n1,n2,n3;
    int sub_total1,sub_total2,sub_total3, taxes1,taxes2,taxes3, total1,total2,total3,SUBTOTAL,TAXES,TOTAL;
   



    printf("Set Shirt Prices\n");
    printf("================\n");

    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf", &price_small);
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf", &price_medium);
    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf", &price_large);
    printf("\n");
    printf("Shirt Store Price List\n");
    printf("======================\n"); 
    printf("SMALL  : $%.2lf\n", price_small);
    printf("MEDIUM : $%.2lf\n", price_medium);
    printf("LARGE  : $%.2lf\n", price_large);
    printf("\n");

    printf("Patty's shirt size is \'%c\'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &n1);
        printf("\n");
    printf("Tommy's shirt size is \'%c\'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &n2);
        printf("\n");
    printf("Sally's shirt size is \'%c\'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &n3);  
        printf("\n");

    sub_total1 = n1 * price_small*100+0.5;
    taxes1 = sub_total1 * TAX+0.5 ;
    total1 = sub_total1 + taxes1;
    sub_total2 = n2* price_large*100+0.5;
    taxes2 = sub_total2 * TAX +0.5;
    total2 = sub_total2 + taxes2;
    sub_total3 = n3* price_medium*100+0.5;
    taxes3 = sub_total3 * TAX+0.5 ;
    total3 = sub_total3 + taxes3;
    SUBTOTAL=sub_total1+sub_total2+sub_total3;
    TAXES=taxes1+taxes2+taxes3;
    TOTAL=total1+total2+total3;



    printf("Customer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",patSize,price_small,n1,(double)sub_total1/100,taxes1/100.0,(double)total1/100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",salSize,price_medium,n3,(double)sub_total3/100,taxes3/100.0,(double)total3/100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n",tomSize,price_large,n2,(double)sub_total2/100,taxes2/100.0,(double)total2/100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n",(double)SUBTOTAL/100,(double)TAXES/100,(double)TOTAL/100);
    printf("\n");
    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n");
    printf("\n");

    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n",(double)SUBTOTAL/100);

    int t=0,l=0,q=0,d=0,n=0,p=0,left=0;

    t=SUBTOTAL/200;
    left=SUBTOTAL%200;
    printf("Toonies  %3d %9.4lf\n",t,(double)left/100.0);
    l=left/100;
    left=left%100;
    printf("Loonies  %3d %9.4lf\n",l,(double)left/100);
    q=left/25;
    left=left%25;
    printf("Quarters %3d %9.4lf\n",q,(double)left/100);
    d=left/10;
    left=left%10;
    printf("Dimes    %3d %9.4lf\n",d,(double)left/100);
    n=left/5;
    left=left%5;
    printf("Nickels  %3d %9.4lf\n",n,(double)left/100); 
    p=left/1;
    left=left%1;
    printf("Pennies  %3d %9.4lf\n",p,(double)left/100);
    printf("\n");
    printf("Average cost/shirt: $%.4lf\n",((double)SUBTOTAL/100)/(n1+n2+n3));
    printf("\n");
    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n",(double)TOTAL/100);

    int T=0,L=0,Q=0,D=0,N=0,P=0,LEFT=0;

    T=TOTAL/200;
    LEFT=TOTAL%200;
    printf("Toonies  %3d %9.4lf\n",T,(double)LEFT/100.0);
    L=LEFT/100;
    LEFT=LEFT%100;
    printf("Loonies  %3d %9.4lf\n",L,(double)LEFT/100);
    Q=LEFT/25;
    LEFT=LEFT%25;
    printf("Quarters %3d %9.4lf\n",Q,(double)LEFT/100);
    D=LEFT/10;
    LEFT=LEFT%10;
    printf("Dimes    %3d %9.4lf\n",D,(double)LEFT/100);
    N=LEFT/5;
    LEFT=LEFT%5;
    printf("Nickels  %3d %9.4lf\n",N,(double)LEFT/100); 
    P=LEFT/1;
    LEFT=LEFT%1;
    printf("Pennies  %3d %9.4lf\n",P,(double)LEFT/100);
    printf("\n");
    printf("Average cost/shirt: $%.4lf\n",((double)TOTAL/100)/(n1+n2+n3));
    printf("\n");
    return 0;
}