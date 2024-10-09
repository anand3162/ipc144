/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P2)
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
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;
    char sold_type1,sold_cream1;int weightgm1;//available coffee1
    char sold_type2,sold_cream2;int weightgm2;//available coffee2
    char sold_type3,sold_cream3;int weightgm3;//available coffee3

    char TYPEA,CREAMA;int SERVINGSA;//coffee entryA
    char TYPEB,CREAMB;int SERVINGSB;//coffee entryB

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n");
    printf("\n");
    printf("Enter the coffee product information being sold today...\n");
    printf("\n");

    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c",&sold_type1);
    printf("Bag weight (g): ");
    scanf(" %d",&weightgm1);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&sold_cream1);
    printf("\n");
    printf("COFFEE-2...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c",&sold_type2);
    printf("Bag weight (g): ");
    scanf(" %d",&weightgm2);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&sold_cream2);
    printf("\n");
    printf("COFFEE-3...\n");
    printf("Type ([L]ight,[M]edium,[R]ich): ");
    scanf(" %c",&sold_type3);
    printf("Bag weight (g): ");
    scanf(" %d",&weightgm3);
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c",&sold_cream3);
    
    printf("\n");

    printf("---+------------------------+---------------+-------+\n");//table1
    printf("   |    Coffee              |   Packaged    | Best  |\n");
    printf("   |     Type               |  Bag Weight   | Served|\n");
    printf("   +------------------------+---------------+ With  |\n");
    printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
    printf("---+------------------------+---------------+-------|\n");
    printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",(sold_type1=='l'||sold_type1=='L'),(sold_type1=='M'||sold_type1=='m'),(sold_type1=='R'||sold_type1=='r'),weightgm1,weightgm1/GRAMS_IN_LBS,(sold_cream1=='Y'||sold_cream1=='y'));
    printf(" 2 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",(sold_type2=='l'||sold_type2=='L'),(sold_type2=='M'||sold_type2=='m'),(sold_type2=='R'||sold_type2=='r'),weightgm2,weightgm2/GRAMS_IN_LBS,(sold_cream2=='Y'||sold_cream2=='y'));
    printf(" 3 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",(sold_type3=='l'||sold_type3=='L'),(sold_type3=='M'||sold_type3=='m'),(sold_type3=='R'||sold_type3=='r'),weightgm3,weightgm3/GRAMS_IN_LBS,(sold_cream3=='Y'||sold_cream3=='y'));
    printf("\n");

    printf("Enter how you like your coffee...\n");
    printf("\n");

    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");//preferenceA
    scanf(" %c",&TYPEA);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c",&CREAMA);
    printf("Typical number of daily servings: ");
    scanf(" %d",&SERVINGSA);
    printf("\n");
    printf("The below table shows how your preferences align to the available products:\n");
    printf("\n");
    printf("--------------------+-------------+-------+\n");//1st table for the customer preference
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n",(((sold_type1=='l'||sold_type1=='L')&&(TYPEA=='l'||TYPEA=='L'))||((sold_type1=='m'||sold_type1=='M')&&(TYPEA=='m'||TYPEA=='M'))||((sold_type1=='r'||sold_type1=='R')&&(TYPEA=='r'||TYPEA=='R'))),(((SERVINGSA>=1&&SERVINGSA<=4)&&(weightgm1>=0&&weightgm1<=250))||((SERVINGSA>4&&SERVINGSA<10)&&(weightgm1>250&&weightgm1<=500))||((SERVINGSA>=10)&&(weightgm1>=1000))),(((sold_cream1=='y'||sold_cream1=='Y')&&(CREAMA=='y'||CREAMA=='Y'))||((sold_cream1=='n'||sold_cream1=='N')&&(CREAMA=='n'||CREAMA=='N'))));
    printf(" 2|       %d         |      %d      |   %d   |\n",(((sold_type2=='l'||sold_type2=='L')&&(TYPEA=='l'||TYPEA=='L'))||((sold_type2=='m'||sold_type2=='M')&&(TYPEA=='m'||TYPEA=='M'))||((sold_type2=='r'||sold_type2=='R')&&(TYPEA=='r'||TYPEA=='R'))),(((SERVINGSA>=1&&SERVINGSA<=4)&&(weightgm2>=0&&weightgm2<=250))||((SERVINGSA>4&&SERVINGSA<10)&&(weightgm2>250&&weightgm2<=500))||((SERVINGSA>=10)&&(weightgm2>=1000))),(((sold_cream2=='y'||sold_cream2=='Y')&&(CREAMA=='y'||CREAMA=='Y'))||((sold_cream2=='n'||sold_cream2=='N')&&(CREAMA=='n'||CREAMA=='N'))));
    printf(" 3|       %d         |      %d      |   %d   |\n",(((sold_type3=='l'||sold_type3=='L')&&(TYPEA=='l'||TYPEA=='L'))||((sold_type3=='m'||sold_type3=='M')&&(TYPEA=='m'||TYPEA=='M'))||((sold_type3=='r'||sold_type3=='R')&&(TYPEA=='r'||TYPEA=='R'))),(((SERVINGSA>=1&&SERVINGSA<=4)&&(weightgm3>=0&&weightgm3<=250))||((SERVINGSA>4&&SERVINGSA<10)&&(weightgm3>250&&weightgm3<=500))||((SERVINGSA>=10)&&(weightgm3>=1000))),(((sold_cream3=='y'||sold_cream3=='Y')&&(CREAMA=='y'||CREAMA=='Y'))||((sold_cream3=='n'||sold_cream3=='N')&&(CREAMA=='n'||CREAMA=='N'))));
    printf("\n");
    printf("Enter how you like your coffee...\n");
    printf("\n");
    printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");//preferenceB
    scanf(" %c",&TYPEB);
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c",&CREAMB);
    printf("Typical number of daily servings: ");
    scanf(" %d",&SERVINGSB);
    printf("\n");
    printf("The below table shows how your preferences align to the available products:\n");
    printf("\n");
    printf("--------------------+-------------+-------+\n");
    printf("  |     Coffee      |  Packaged   | With  |\n");
    printf("ID|      Type       | Bag Weight  | Cream |\n");
    printf("--+-----------------+-------------+-------+\n");
    printf(" 1|       %d         |      %d      |   %d   |\n",(((sold_type1=='l'||sold_type1=='L')&&(TYPEB=='l'||TYPEB=='L'))||((sold_type1=='m'||sold_type1=='M')&&(TYPEB=='m'||TYPEB=='M'))||((sold_type1=='r'||sold_type1=='R')&&(TYPEB=='r'||TYPEB=='R'))),(((SERVINGSB>=1&&SERVINGSB<=4)&&(weightgm1>=0&&weightgm1<=250))||((SERVINGSB>4&&SERVINGSB<10)&&(weightgm1>250&&weightgm1<=500))||((SERVINGSB>=10)&&(weightgm1>=1000))),(((sold_cream1=='y'||sold_cream1=='Y')&&(CREAMB=='y'||CREAMB=='Y'))||((sold_cream1=='n'||sold_cream1=='N')&&(CREAMB=='n'||CREAMB=='N'))));
    printf(" 2|       %d         |      %d      |   %d   |\n",(((sold_type2=='l'||sold_type2=='L')&&(TYPEB=='l'||TYPEB=='L'))||((sold_type2=='m'||sold_type2=='M')&&(TYPEB=='m'||TYPEB=='M'))||((sold_type2=='r'||sold_type2=='R')&&(TYPEB=='r'||TYPEB=='R'))),(((SERVINGSB>=1&&SERVINGSB<=4)&&(weightgm2>=0&&weightgm2<=250))||((SERVINGSB>4&&SERVINGSB<10)&&(weightgm2>250&&weightgm2<=500))||((SERVINGSB>=10)&&(weightgm2>=1000))),(((sold_cream2=='y'||sold_cream2=='Y')&&(CREAMB=='y'||CREAMB=='Y'))||((sold_cream2=='n'||sold_cream2=='N')&&(CREAMB=='n'||CREAMB=='N'))));
    printf(" 3|       %d         |      %d      |   %d   |\n",(((sold_type3=='l'||sold_type3=='L')&&(TYPEB=='l'||TYPEB=='L'))||((sold_type3=='m'||sold_type3=='M')&&(TYPEB=='m'||TYPEB=='M'))||((sold_type3=='r'||sold_type3=='R')&&(TYPEB=='r'||TYPEB=='R'))),(((SERVINGSB>=1&&SERVINGSB<=4)&&(weightgm3>=0&&weightgm3<=250))||((SERVINGSB>4&&SERVINGSB<10)&&(weightgm3>250&&weightgm3<=500))||((SERVINGSB>=10)&&(weightgm3>=1000))),(((sold_cream3=='y'||sold_cream3=='Y')&&(CREAMB=='y'||CREAMB=='Y'))||((sold_cream3=='n'||sold_cream3=='N')&&(CREAMB=='n'||CREAMB=='N'))));
    printf("\n");
    printf("Hope you found a product that suits your likes!\n");
    printf("\n");
    return 0;
}


/*

Provided formatting parts for printf statements:

As described in step-7
======================
printf(" 1 |   %d   |   %d    |   %d   | %4d | %6.3lf |   %d   |\n",

As described in step-10
=======================
printf(" 1|       %d         |      %d      |   %d   |\n",

*/