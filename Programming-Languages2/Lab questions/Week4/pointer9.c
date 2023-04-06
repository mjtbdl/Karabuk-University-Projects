#include <stdio.h>

int main(){
    int i[10],j,*iptr;
    for (j=0;j<10;j++)
        i[j]=j;
    
    iptr = i;
    for (j=0;j<10;j++){
        printf("%d ",*iptr);
        iptr++;
    }
    //iptr will not show the start of the array i.
    printf("\n%d \n",*(iptr-1));
    iptr = i;
    for (j=0;j<10;j++)
        printf("%d ",*(iptr+j));
    printf("\n%d",*iptr);
}