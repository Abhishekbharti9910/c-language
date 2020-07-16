/*Author: abhishek bharti
  Date of formation: 16-07-2020
Purpose: To enter the set of no. and find the range of it
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int num, small, big, i=1, range;
    char choice;
    printf("\n\tthis is a program to to find range\n\t\t enter num you want to check the range for\n\t");
    scanf("%d", &num);
    printf("you entered %d", num);
    big=small=num;
    while (i==1)
    {
        printf("\n\t want to enter no answer(y/n)");
        scanf(" %c", &choice);
        if (choice=='y'||choice=='Y')
        {
        printf("\n\tplease enter no.\n\t");
        scanf("%d", &num);
        printf("you entered %d\n", num);
        if(num>big)
        {
        big=num;
        }
        else if (num<small)
        {
            small=num;
        }
        i=1;
        }
        else
        {
            i=0;
        }
        
    }
    range=big-small;
    printf("\n\n\trange of smallest %d and biggest %d of set of no. you entered is  %d", small, big, abs(range));
    getch();
    return 0;
}