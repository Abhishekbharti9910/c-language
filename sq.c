#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int a,b,power=1;
    system("cls");
    printf("\n\n\t\tplease enter no. you want raise the power\n");
    scanf("%d", &a);
    printf("\n\n\t\tplease enter how much time you want to raise it power\n");
    scanf("%d", &b);
   for (int i = 0; i < b; i++)
   {
       power*=a;
   }
   
    printf("number %d you want to raise the power by %d = %d", a, b, power);
    getch();
    return 0;
    
}