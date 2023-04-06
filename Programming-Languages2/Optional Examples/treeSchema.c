#include <stdio.h>

int print_top(int star, int space){
    int n=5;
    for (int i = 0; i < space; i++){
        printf(" ");
    }
    for (int i = 0; i < star; i++){
        printf("*");
    }
    printf("\n");
    if (star == n){
        return 0;
    }
    else{
        print_top(star+2, space-1);
    }
}

int print_middle(int star, int space){
    int n=7;
    for (int i = 0; i < space; i++){
        printf(" ");
    }
    for (int i = 0; i < star; i++){
        printf("*");
    }
    printf("\n");
    if (star == n){
        return 0;
    }
    else{
        print_middle(star+2, space-1);
    }
}

int print_bottom(int star){
    int n=3;
    for (int i = 0; i < 4; i++){
        printf(" ");
    }
    printf("|\n");
    if (star == n){
        return 0;
    }
    else{
        print_bottom(star+1);
    }
}

int main(){
    int space = 4;
    int star = 1;
    print_top(star, space);
    print_middle(star, space);
    print_bottom(star);
}