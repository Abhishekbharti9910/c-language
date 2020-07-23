/*
author: abhishek bharti
dop:23-07-2020
purpose:practise nested loop (displaying two side by side no. in which one of the choosed no. is not displayed in it)
*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,j=1;
    while (i<5)
    {
        j=1;//this is done here for i value repetation because not presence of this will make execution upto i=1 only
        while(j<=4)
        {
            if(j==3){
                j++;
                continue;
            }
            else
                printf("\n\t%d\t%d", i, j);
               j++; 
        }
        i++;
    }
    getch();
    return 0;
}