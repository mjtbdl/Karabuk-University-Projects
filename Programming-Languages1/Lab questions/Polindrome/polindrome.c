#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, temp, olc, bir;
    float temp2;
    
    printf("enter a number\n");
    scanf("%d",&n);

    temp=n;
    temp2=temp;
    olc=0;

    do{
        bir=temp%10;
        olc=olc+bir;
        olc=olc*10;
        temp=temp/10;
        printf("%d",temp);
        temp2=temp2/10;
    }
    while(temp2>1);
    if(temp==n){
        printf("polindrome");
    }
    else{
        printf("not polindrome");
    }
    return 0;
}