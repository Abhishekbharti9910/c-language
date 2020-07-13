#include<stdio.h>
#include<conio.h>
    int main()  
    {  
        int limit, num, positive = 0, negative = 0, zero = 0;  
      
        printf("Enter the limit\n");  
        scanf("%d", &limit);  
      
        printf("Enter %d numbers\n", limit);  
      while (limit)
      {
      scanf("%d", &num);
          
          if(num>0)
          {
              positive++;
          }
          else if (num<0 )
          {
              negative++;
          }
          else
          {
              zero++;
          }
          limit--;
      }
      printf("\n\t\tpositive nubers you entered  = %d", positive++);
      printf("\n\t\tnegative nubers you entered  = %d", negative++);
      printf("\n\t\tzero you entered  = %d", zero++);

      getch();
        return 0;  
    }  

