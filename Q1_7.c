#include<stdio.h>
int main()
{
    printf("Yash Kumar,125113026\n");
    float a,b,result;
    int choice;
    printf("Enter the numbers:");
    scanf("%f %f",&a,&b);
    printf("MENU:");
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLY\n");
    printf("4.DIVISION\n");
    printf("Enter the choice(1-4):");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
        result=a+b;
        printf("result=%.2f\n",result);
        break;

        case 2:
        result=a-b;
        printf("result=%.2f\n",result);
        break;

        case 3:
        result=a*b;
        printf("result=%.2f\n",result);
        break;

        case 4:
        if (b!=0)
        {result=a/b;
        printf("result=%.2f\n",result);
        }
        else
        {
            printf("result=ERROR\n");
        }
        break;
        default:
        printf("invalid choice\n");
        

    }

    return 0;


}