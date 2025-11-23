#include <stdio.h>
int main(){
    printf("Yash Kumar, 125113026\n");
    int arr[10];

    printf("Enter array elements : ");
    for(int i = 0;i<10;i++){
        scanf("%d", (arr + i));
    }   
    int sum = 0;
    for(int i = 0;i<10;i++){
        sum += *(arr + i);
    }
    printf("Sum of array elements = %d\n", sum);
    return 0;


}