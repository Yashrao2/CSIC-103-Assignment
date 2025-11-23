#include<stdio.h>
int main()
{
    printf("Yash Kumar,125113026\n");
    int n;
    long long factorial=1;
    int i=1;
    printf("enter the number:");
    scanf("%d",&n);
    if (n==0){
        printf("the factorial of zero is :1");
    }
    else if (n<0){
        printf("the factorial of negative number is not defined");
    }
    else{
    for (i = 1; i <= n; ++i)
    {
         factorial *= i;
    }
    printf("the factorial of %d is:%lld",n,factorial);
}
     return 0;
    
}