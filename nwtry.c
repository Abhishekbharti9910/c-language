#include<conio.h>
#include<stdio.h>
int main()
{
    int num, positive=0, negative=0, zero=0;
    char check;
    printf("want to enter no. use (y/n)");
    scanf("%c", &check);
    while (check=='y'||check=='Y')
    {
        printf("\n\tplease enter no.\t");
        scanf("%d", &num);
        if(num>0)
        {
        positive++;
        }
        else if (num<0)
        {
            negative++;
        }
        else if (num==0)
        {
            zero++;
        }
        else
        {
            printf("invalid selection");
            continue;
        }
        
        
    printf("want to enter no. use (y/n)");
    scanf(" %c", &check);
        
    }
    printf("\n\t\tno. of positive integer \t %d",positive++);
    printf("\n\t\tno. of negative integer \t %d",negative++);
    printf("\n\t\tno. of zero integer \t %d",zero++);
    getch();
    return 0;
}