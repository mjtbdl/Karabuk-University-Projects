#include <stdio.h>
#include <stdlib.h>

int biggest(int array[], int n){
    int i=0, big=0;
    while(i<n){
        printf("enter the %d. number:", i+1);
        scanf("%d", &array[i]);
        if(array[i] > big){
            big = array[i];
        }
        i++;
    }
    return big;
}

int main(){
    int array[20],n;

    printf("enter the number of elements in the array:");
    scanf("%d", &n);

    printf("biggest number in the array is %d", biggest(array,n));
}// example of a program that uses a function to calculate the biggest number in array.