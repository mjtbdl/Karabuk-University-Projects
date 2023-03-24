#include <stdio.h>
#include <stdlib.h>

int index(int h, int w){
    int i;
    i = w/(h*h);

    if(0<=i<=18){
        return 1;
    }
    else if(18<i<=25){
        return 2;	
    }
    else if(25<i<=30){
        return 3;
    }
    else if(30<i){
        return 4;
    }
}

int main(){
    int height, weight, bmi;

    printf("enter your height in cm:");
    scanf("%d", &height);
    printf("enter your weight in kg:");
    scanf("%d", &weight);

    bmi = index(height, weight);

    if(bmi == 1){
        printf("you are underweight");
    }
    else if(bmi == 2){
        printf("you are normal");
    }
    else if(bmi == 3){
        printf("you are overweight");
    }
    else if(bmi == 4){
        printf("you are obese");
    }
} // example of a program that uses a function to calculate the BMI of a person.