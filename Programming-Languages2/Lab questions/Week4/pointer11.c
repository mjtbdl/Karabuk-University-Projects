#include <stdio.h>

int main(){
    int i,j;
    char * springMonths[3] = {"March","April","May"};
    char * summerMonths[3] = {"June","July","August"};
    char * autmnMonths[3] = {"September","October","November"};
    char * winterMonths[3] = {"December","January","February"};

    char ** table[4];

    table[0] = springMonths;
    table[1] = summerMonths;
    table[2] = autmnMonths;
    table[3] = winterMonths;

    for (i=0;i<4;i++){
        for (j=0;j<3;j++){
            printf("%s ",table[i][j]);
        }
        printf("\n");
    }