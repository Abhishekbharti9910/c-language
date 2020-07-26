#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2, num;
    char choice;
    printf("\n\tthis is a program to check the no. entered is a prime or not\n\twant to continue answer with (y/n)\n\t");
    scanf(" %c", &choice);
    if (choice=='y'||choice=='Y')
    {
        printf("\n\tplease enter no. you want to check prime or not\n\t");
        scanf("%d", &num);
    while (i<num)
    {
        if (num%i==0)
        {
            printf("\n\n\t\tis not a prime no. because it is divisible");
            // temp=n-1;
            // if(i==temp)
            // {
                break;
            // }
        }
        //problematic error because i will check in both if and in both it finds to true hence both will run
        // if(num==i)  
        // {       
        //     printf("\n\t\tis a prime no.\n");
        //     break;
        // }
        i++;
    }
        if(num==i)
        {
            printf("\n\t\tis a prime no.\n");
        }
    }
    else
    {
printf("\n\t\tyou choosed to exit program!!\n\t");
    }
    getch();
    return 0;
}