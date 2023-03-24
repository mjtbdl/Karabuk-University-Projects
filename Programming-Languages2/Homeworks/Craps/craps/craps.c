#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int dice1, dice2, total, temp;
    char cmd1;

    printf("Welcome to craps game. Let me tell you the rules of this game \n");
    printf("1. If the sum of the dice thrown in the first turn is 7 or 11, the player wins. \n");
    printf("2. If the sum of the dice thrown in the first turn is 2, 3, or 12, the player loses. \n");
    printf("3. If the sum of the dice thrown in the first turn is 4, 5, 6, 8, 9, or 10, that number will be the player's target number \n");
    printf("4. If the player rolls the target number again in subsequent turns, they win. However, if they roll a 7 before hitting the target number, they lose. \n");
    printf("Those are the rules. Have a nice game. \n");

    printf("To start the game please type 'y'. If you want exit then press 'n' \n");
    scanf(" %c", &cmd1);

    again:

    srand(time(NULL));
    dice1 = (rand() %6) + 1;
    dice2 = (rand() %6) + 1;
    total = dice1 + dice2;

    while (cmd1!='n')
    {
        if(cmd1=='y'){
            printf("Your first numbers are %d and %d which makes %d \n", dice1,dice2,total);

            if(total == 7 || total == 11){
                printf("You win because you rolled %d in total. Congratulations \n", total);
            }
            else if (total == 2 || total == 3 || total == 12){
                printf("You lose because you rolled %d in total.\n", total);
            }
            else{
                printf("You rolled %d in total. This will be your target number. Rolling again until you hit same number. \n", total);
                temp = total;
                do
                {
                    dice1 = (rand() %6) + 1;
                    dice2 = (rand() %6) + 1;
                    total = dice1 + dice2;
                    printf("You rolled %d in total. \n", total);
                } while (temp != total && total != 7);
                if (temp == total){
                    printf("You win because you rolled %d in total again. \n", total);
                }
                else(printf("You lost because you rolled %d. Better luck next time.\n", total));
            }
            printf("Do you want to play again? y/n \n");
            scanf(" %c", &cmd1);
            goto again;
        }
        else{
            printf("Please type 'y' or 'n'. \n");
            scanf(" %c", &cmd1);
        }
    }
    printf("Thank you for trying our game \n");
}