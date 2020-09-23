#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,first=0,mid=0,search=0,last=9;
    int ar[10]={10,14,19,26,27,31,33,35,42,49};
    printf("please enter the value you want to search in list>>>");
    scanf("%d",&search);
    while (first<=last)
    {
        mid=(0+9)/2;//last=n-1
        if(ar[mid]<last)
        {
            first=mid+1;
        }
        else if(ar[mid]==search)
        {
            printf("at %d location your value %d is present", mid, &ar[mid]);
            break;
        }
        else
        {
            last=mid-1;
        }
    }
if(first>last)
{
    printf("searched elements not found");
}
getch();
return 0;    
}