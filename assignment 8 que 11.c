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
                if(j<=5)
                    printf("%c",59+j+i);
                else
                    printf("%c",69+i-j);
            }
            else
                printf(" ");


        }
        printf("\n");
    }
    return 0;
}
