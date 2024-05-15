#include<stdio.h>
#include<stdlib.h>

int main (){
    srand(time(0));
int number_of_guess = 0;
int hidden = rand()%100+1;
while(number_of_guess<10){
        int guess;
        printf("Enter the guess number: ");
    scanf("%d",&guess);
    if(hidden==guess){
        printf("You are right");
        break;
    }else if(hidden<guess){
        printf("Guess less number\n");
    }else{
        printf("Guess big number\n");
    }
    number_of_guess++;
}
if(number_of_guess==10){
    printf("You failed!!!!!!!!!!");
}
return 0;
}
