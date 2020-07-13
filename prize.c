//author: abhishek bharti
//date:17-6-2020
//purpose:to distribute prize on certain subject passing
#include<stdio.h>
#include<conio.h>
void main()
{
    int maths, science;
    
    printf("\n \t\t\t this is the program for prize distribution! \n");
    printf("if someone passed in maths use '1' and for science use '1'  if not then enter '0' \n \t\t\t please first enter maths data then science\n");
        scanf("%d \n %d", &maths, &science);

        if(maths==1 && science==1)
{
    printf("\n\n\t\t he/she passed in both maths and science \n");
    printf("\n\t\t\t prize money is given to him/her is 45 ");
}
        else if(maths==1 && science==0)
{
    printf("\n\n\t\t he/she passed in maths only \n");
    printf("\n\t\t\t prize money is given to him/her is 15 ");
}
        else if(maths==0 && science==1)
        {
    printf("\n\n\t\t he/she passed in science only \n");
    printf("\n \t\t\tprize money is given to him/her is 15 ");
}
        else
{
printf("no prize he/she is not passed in any");
}

getch();

}