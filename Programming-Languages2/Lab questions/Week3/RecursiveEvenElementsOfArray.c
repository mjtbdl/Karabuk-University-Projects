//<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

int even(int a[], int n){
    if (n == 0){
        return 0;
    }
    else if (a[n-1] % 2 == 0){
        return 1 + even(a, n-1);
    }
    else{
        return even(a, n-1);
    }
}

int main(){
    int i, n, a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Even elements of the array: %d", even(a, n));
}
//=======
#include<stdio.h>
#include<stdlib.h>

int even(int a[], int n){
    if (n == 0){
        return 0;
    }
    else if (a[n-1] % 2 == 0){
        return 1 + even(a, n-1);
    }
    else{
        return even(a, n-1);
    }
}

int main(){
    int i, n, a[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Even elements of the array: %d", even(a, n));
//>>>>>>> f608c7dfe6c5f1fe0b0283ff4cf62fe5cc78b0c0
}