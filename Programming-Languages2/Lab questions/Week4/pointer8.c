#include <stdio.h>

int main(){
    int elm;
    int month[12];
    int *ptr;
    ptr = month;//assigning the address of month to ptr
    elm = ptr[3];// elm = month[3]
    ptr = month+3;//ptr will point to the address of month[3]
    ptr = &month[3];//ptr will point to the address of month[3]
    elm = (ptr+2)[2];//elm = month[7]
    elm = *(month+3);//elm = month[3]
    ptr = month;//assigning the address of month to ptr
    elm = *(ptr+3);//elm = month[3]
    elm = *(month+3);//elm = month[3]
}