#include <stdio.h>
#include <stdlib.h>

int calculate(int n, int m){
    int marks[100],i=1,j=m,pass=0,avarage=0;
    while(i<=n){
        printf("enter mark for student %d:",i);
        scanf("%d", &marks[i]);
        while(0 > marks[i] || marks[i] > 100){
            printf("please enter a number between 0 and 100\n");
            scanf("%d", &marks[i]);
        }
        avarage += marks[i];
        i++;
    }
    i=1;
    while (i<=n){
        if(marks[i] >= m){
            pass++;
        }
        i++;
    }
    avarage = avarage/n;
    printf("the avarage mark is %d \n", avarage);
    return pass;
}

int main(){
    int numStudents, passMark;
    printf("how many students are there?");
    scanf("%d", &numStudents);
    while(1 > numStudents || numStudents > 100){
        printf("please enter a number between 1 and 100\n");
        scanf("%d", &numStudents);
    }
    printf("what is the pass mark?");
    scanf("%d", &passMark);
    while(0 > passMark || passMark > 100){
        printf("please enter a number between 0 and 100\n");
        scanf("%d", &passMark);
    }
    printf("the number of students who passed is %d", calculate(numStudents,passMark));
}// example of a program that uses a function to calculate the number of students who passed.