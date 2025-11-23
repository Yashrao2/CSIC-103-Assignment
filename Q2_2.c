#include<stdio.h>
int main()
{
    printf("Yash Kumar,125113026\n");
    int i,n;
    float sum=0,average;
    float num[100];
    printf("enter the number of elements:");
    scanf("%d",&n);
    
     for ( i = 0; i < n; i++)
    {
        printf("enter the number:");
    scanf("%f",&num[i]);
        sum+=num[i];
    }
    average= sum/n;
    printf("the sum of %d numbers is :%.2f\n",n,sum);
    printf("the average of %d numbers is :%.2f",n,average);

    return 0;
}