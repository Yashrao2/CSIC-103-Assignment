#include<stdio.h>
int main(){
printf("Yash Kumar , 125113026\n");
int num;
printf("enter a number:");
scanf("%d",&num);

if(num % 2==0)
{
    printf("%d is an even integer",num);
}
else
{
    printf("%d is an odd integer",num);
}

return 0;
}