#include<stdio.h>
int max(int x,int y)
{
    if(x>y)
       return x;
    else
       return y;

}
int main()
{
    int a,b;
    
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);

    printf("Maximum number is %d",max(a,b));

    return 0;
    
}
