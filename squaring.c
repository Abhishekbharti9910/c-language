#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, i=1, sq=1;
    printf("\nplease enter no. and enter power raise to the no. you entered\n");
    scanf("%d \n %d", &a , &b);
    printf("you entered no. = %d and square of %d  \n", a, b);
    while (i<=b)
    {
        sq*=a;
        i++;
    }
    printf("no. %d raise to the power %d equal to = %d", a, b, sq );
    getch();
    
}