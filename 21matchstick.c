#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main()
{
    int i=0, c=0, s=0;
    printf("\n \t\t want to play game \n \t in this game 21 matchstick are there \n\t rules for this game are \n\t both of us can choose at a time 1,2,3 or 4 match stick only \n\t last one forced to choose will be the looser of the game\n\t ");
    printf("\n\t\t\t ok lets get started");
    while (i<20)
    {
        printf("\n\nselect no. of matchstick  ");
        scanf("%d", &s);
        if (i<1 && i>4)
        {
            printf("\n\ninvalid select of matchstick select again");
            continue;
        }
            c = 5 - s;
        printf("\n\t\tcomputer has selected %d\n", c);
        i+=5;
        
    }
    printf("\n\n\n\t\t\tyou loose beacuse there is 1 left to choose for you\n\n\t\tbetter luck next time!!");
    getch();
}
