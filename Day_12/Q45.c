#include<stdio.h>
int palindrome(int n)
{
    int rev = 0,temp = n;
    while(temp>0)
    {
        rev = rev * 10 + temp % 10;
        temp = temp/10;
    }
    return(rev==n);
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if(palindrome(num))
       printf("Palindrome");
    else
       printf("Not palindrome");
       return 0;
}