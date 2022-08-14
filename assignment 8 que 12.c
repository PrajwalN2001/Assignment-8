#include<stdio.h>
int main()
{

    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j<=4)
                    printf("%c",65-i+j);
                else
                    printf("%c",73-j-i);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
