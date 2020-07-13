#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    while (i<=255)
    {
        if (i%24==0)
        {
            getch();
            system("cls");
        }
        
        printf("\n\n\t\tascci no. for %d is %c",i ,i);
        i++;
    }
    printf("\n\t\tplease enter any key to end this program");
    getch();
    return 0;
}