#include<stdio.h>
int main()
{
    printf("Yash Kumar,125113026\n");
    int n;
    int sum=0;
    int i=1;
    printf("enter the number:");
    scanf("%d",&n);
    for (i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("the sum of first %d natural number is %d",n,sum);
    return 0;



}