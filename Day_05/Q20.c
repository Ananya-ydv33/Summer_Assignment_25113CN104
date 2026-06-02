#include<stdio.h>
int main()
{
    int n,largestFactor=1;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        while(n%i==0){
            largestFactor=i;
            n/=i;
        }
    }
    printf("Largest Prime Factor=%d",largestFactor);
    return 0;
}