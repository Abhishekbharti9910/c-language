#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
    float sum=0.0, angle, temp;
    printf("\n\t\t\tplease enter angle in degree\n");
    scanf("%f", &angle);
    temp=angle;
    angle= angle*(M_PI/ 180.0);
    sum = ( pow(sin(angle),2) + pow(cos(angle),2) );
    if(sum==1)
    {
    printf("sum of square of\n\n\t\t\t sin(%0.2f) + cos(%0.2f) = 1",temp ,temp);

    }

    else
    {
    printf("sum of square of \n\n\t\t sin(%0.2f) + sin(%0.2f) = 0 ",temp ,temp );
    }
    getch();
    return 0;
}