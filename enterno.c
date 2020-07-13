#include<stdio.h>
#include<conio.h>
void main()
{
    char seek='y';
    int positive=0, negative=0, zero=0, num=0, i=1 ;
    // printf("\n want to enter no. answer in 'y' for yes 'n' for no");
    // scanf("%c", &seek);
    while (seek=='y' || seek=='Y')
    {
        printf("\nplease enter no. of your choice\n");
        scanf("%d", &num);
        if(num<0)
        {
            // printf("\n\n\t\tyou entered %d",num);
            negative++;
        printf("\n\t\twish to continue in entering no. answer with 'y' and if not then any key\n");
        scanf("%c", &seek);
        }
      else  if (num=0)
        {
            // printf("\n\n\t\t you entered %d",num);
            zero++;
        printf("\n\t\twish to continue in entering no. answer with 'y' and if not then any key\n");
        scanf("%c", &seek);
        }

        else
        {
            positive++;
            printf("\n\n\t\tyou entered %d",num);
        printf("\n\t\twish to continue in entering no. answer with 'y' and if not then any key\n");
        scanf("%c", &seek);
        }
    }
    printf("\n\t\tno. of positive value you entered =  %d", positive);
    printf("\n\t\tno. of negative value you entered =  %d", negative);
    printf("\n\t\tno. of zero you entered =  %d", zero);
    getch();
}