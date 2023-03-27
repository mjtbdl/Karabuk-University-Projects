#include <stdio.h>
unsigned int multiply(unsigned int x, unsigned int y){
if (x == 1){
/* Terminating case */
return y;
}
else if (x > 1){
/* Recursive step */
return y + multiply(x-1, y);
}
/* Catch scenario when x is zero */
return 0;
}
int main() {
printf("7 times 5 is %d", multiply(7, 5));
return 0;
}