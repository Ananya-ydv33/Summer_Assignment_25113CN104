#include<stdio.h>
int main()
{
    int start,end,num,temp,sum,r;
    printf("Enter start and end of range:");
    scanf("%d %d",&start,&end);

    for(num=start;num<=end;num++){
        temp = num;
        sum = 0;
        
        while(temp>0){
            r = temp % 10;
            sum = sum + r*r*r;
            temp = temp/10;
        }
        if(sum == num)
        printf("%d\n", num);
    }
    return 0;
}