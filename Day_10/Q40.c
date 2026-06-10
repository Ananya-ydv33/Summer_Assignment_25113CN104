#include<stdio.h>
int main()
{
    for(int i=0;i<=4;i++)
    {
        for(int j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(char j='A';j<='A'+i;j++)
        {
            printf("%c",j);

        }
        for(char  j='A'+i-1;j>='A';j--)
        {
            printf("%c",j);
        }

        printf("\n");

    }
    return 0;
}