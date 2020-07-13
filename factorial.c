#include<stdio.h>
#include<conio.h>
int main()
{
    int fact=1,i=1,n;
    // clrscr();
    printf("please enter no. you want factorial\n");
    scanf("%d", &n);
    while (i<=n)
    {
        fact*=i;
        i++;
    }
    printf("\nfactorial of no. you entered %d is %d", n, fact);
    getch();

}