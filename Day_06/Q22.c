#include<stdio.h>
int main(){
    int num,decimal=0,remainder,power=1;
    printf("Enter a binary number:");
    scanf("%d", &num);

    while(num!=0){
        remainder=num%10;
        decimal+=remainder*power;
        power*=2;
        num/=10;
    }
    printf("Decimal number=%d", decimal);
    return 0;
}