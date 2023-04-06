//pointer arithmetic

#include <stdio.h>

int main(){
    int i, *iptr;
    iptr = &i; //assigning the address of i to iptr
    (*iptr)++; //incrementing the value of i by 1
    iptr++; //incrementing the pointer by 1 will increment the address by 4 bytes
    (*iptr)=7; //assigning the value 7 to the address of iptr
    *(iptr+1)=8; //assigning the value 8 to the address of iptr+1
}