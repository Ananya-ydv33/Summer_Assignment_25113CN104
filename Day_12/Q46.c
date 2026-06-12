/*Write a program to Write function for Armstrong*/

#include<stdio.h>
int armstrong(int n)
{
    int sum = 0,rem,temp;
    temp = n;
    while(n>0)
    {
        rem = n%10;
        sum = sum+rem*rem*rem;
        n = n/10;
    }
    return(sum==temp);
}
 int main()
 {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if(armstrong(num))
       printf("Armstrong NUmber");
    else
       printf("Not Armstrong Number");
    
    return 0;
 }