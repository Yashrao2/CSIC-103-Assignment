#include<stdio.h>
int main()
{
printf("Yash Kumar,125113026\n");
int year;
printf("enter a year:");
scanf("%d",&year);
if( year % 400 ==0)
{
    printf("%d is leap year",year);
}
else if (year % 4 ==0 && year % 100 != 0)
{
printf("%d is leap year",year);
}
else
{
printf("%d is not a leap year",year);
}
return 0;
}