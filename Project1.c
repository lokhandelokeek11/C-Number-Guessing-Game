#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number, guessednumber, noofguesses=1;
    srand(time(0));
    number = rand()%100 + 1; 
    // printf("The number is %d\n", number);
    
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guessednumber);
        if(guessednumber>number){
            printf("Pls, Lower number please!\n");
        }
        else if(guessednumber<number){
            printf("Pls, Higher number please!\n");
        }
        else{
            printf("Hurray !! You guessed it in %d attempts\n", noofguesses);
        }
        noofguesses++;
    }
    while(guessednumber!=number);
    return 0;
}