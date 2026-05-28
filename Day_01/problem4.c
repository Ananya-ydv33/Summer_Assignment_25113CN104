#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a positive number:");
    scanf("%d", &n);

    while(n>0)
    {
        n=n/10;
        count++;
    }
    printf("Number of digits in the integer is: %d", count);
    return 0;
}