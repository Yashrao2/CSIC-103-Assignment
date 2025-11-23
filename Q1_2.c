#include<stdio.h>

int main(){
    printf("Yash Kumar , 125113026\n");
    int a,b,c;
    int largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a >= b) {
        if (a >= c)
            largest = a;
        else
            largest = c;
    } else {
        if (b >= c)
            largest = b;
        else
            largest = c;
    }

    printf("Largest = %d\n", largest);
    return 0;
}
