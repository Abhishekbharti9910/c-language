#include<stdio.h>
#include<conio.h>
int main()
{
    int sal;
    // clrscr();
    printf("\n\nplease enter salary to know his her designation\n\n");
    scanf("%d", &sal);
    sal>=25000 && sal<=40000 ? printf("\n he / she is a manager \n") : 0;
    sal>=15000 && sal<25000 ? printf("\n he / she is a accountant\n") : printf("he / she is a clerk");
    getch();
    return 0;
}