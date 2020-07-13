#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    char decision;
    int octalnum=0, decimal=0, temp, i=1; 
    system("cls");
    printf("\n\t\t here is a program that convert decimal number to octal\n\n");
    printf("\t\twant to convert answer with (y,n)");
    scanf(" %c", &decision);
    if (decision=='y'||decision=='Y')
    {
        printf("\n\n\tplease enter decimal value you want to convert into octal num\n");
        scanf(" %d", &decimal);
        temp=decimal;
        while (decimal !=0)
        {
            octalnum+=(decimal%8)*i;
            decimal/=8;
            i*=10;
        }
        printf("\n\t\t value of %d in octal form is = %d ",temp, octalnum);
    }
    else
    {
        printf("\n\n\t\tyou choosed to not to convert please press any key to continue");
    }
    getch();
}