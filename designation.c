#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int salary=0;
    system("cls");
    printf("\n\n\t\tplease enter salary of a person you want to check designation\n");
    scanf("%d", &salary);
    salary>=25000 && salary<=40000 ? printf("\n\t\tperson is a manager\n") : salary>=15000 && salary<25000 ? printf("\n\t\t he is an accountant") : printf("\n\n\t\t person is a clerk");
    getch();
    return 0;
}