#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int StonePaperThread(char you, char comp){
    // returns 1 if you win, -1 if you lose and 0 if draw
    // Condition for draw
    // Cases covered:
    // ss
    // pp
    // tt
    if(you == comp){
        return 0;
    }

    // Non-draw conditions
    // Cases covered:
    // sp
    // ps
    // st
    // ts
    // tp
    // pt


    if(you=='s' && comp=='p'){
        return -1;
    }
    else if(you=='p' && comp=='s'){
        return 1;
    }

    if(you=='s' && comp=='t'){
        return -1;
    }
    else if(you=='t' && comp=='s'){
        return 1;
    }

    if(you=='t' && comp=='p'){
        return 1;
    }
    else if(you=='p' && comp=='t'){
        return -1;
    }

}
int main(){
    char you, comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number<22){
        comp = 's';
    }
    else if(number>33 && number<66){
        comp='p';
    }
    else{
        comp='t';
    }

    printf("Enter 's' for stone, 'p' for paper and 't' for thread\n");
    scanf("%c", &you);
    int result = StonePaperThread(you, comp);
    if(result ==0){
        printf("Game draw!\n");
    }
    else if(result==1){
        printf("You win!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You chose %c and computer chose %c. ", you, comp);
    return 0;
}
