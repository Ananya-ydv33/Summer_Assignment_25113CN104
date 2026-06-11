#include<stdio.h>
int sum(int x,int y)
{
    int sum = x+y;
    return sum;
}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a,&b);

    printf("Sum of both the numbers is %d", sum(a,b));
    return 0;
}