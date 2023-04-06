#include <stdio.h>

int main(){
    int arr[5],*p1;

    for (int i = 0; i < 5; i++){
        printf("Enter %d. integer: \n", i+1);
        scanf("%d", &arr[i]);}

    p1 = &arr[0];

    for (int i = 0; i < 5; i++){
        printf("%d. integer: %d\n", i+1, *p1);
        p1++;}    
}