#include<stdio.h>
int main()
{

    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
               if(i==2 || i==3 || i==4)
               {
                   if(j<=6-i || j>=4+i)
                    printf("*");
                   else
                    printf(" ");
               }
               else
               {
                   printf("*");

               }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
