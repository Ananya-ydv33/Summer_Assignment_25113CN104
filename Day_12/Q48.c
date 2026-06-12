/*Write a program to Write function for perfect number*/

#include<stdio.h>
int perfect(int n)
{
    int i,sum = 0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        sum = sum + i;
    }
    return(sum==n);
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if(perfect(num))
       printf("Perfect number");
    else
       printf("Not Perfect number");

    return 0;
}