#include<stdio.h>
void main()
{
    int fib1=0,fib2=1,fib3,limit,count = 0;
    printf("Enter the number uptill which the seriese has to be generated\n");
    scanf("%d",&limit);
    printf("===THE FIBONACCI SERIES IS===\n");
    printf("%d\n",&fib1);
    printf("%d\n",&fib2);
    count=2;
    while (count<limit){
        fib3=fib1 + fib2;
        count++;
        printf("%d\n",fib3);
        fib1=fib2;
        fib2=fib3;
    }
    return 0;        
}
