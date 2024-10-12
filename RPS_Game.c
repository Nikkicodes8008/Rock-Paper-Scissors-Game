#include <stdio.h>
#include<time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    int computer = rand() % 3;
    int player;
    printf("0-->Rock \n1-->Paper\n2-->Scissors\nSelect a number\n");
    scanf("%d",&player);
    if(player==computer)
        printf("The computer chose the same thing\nIt is a tie!!");
    else if(player==0 && computer==1){
        printf("The computer chose paper\nYou Lost!!");
    } 
     else if(player==0 && computer==2){
        printf("The computer chose Scissors\nYou Win!!");   
    }
     else if(player==1 && computer==0){
        printf("The computer chose rock\nYou Win!!");
    } 
     else if(player==1 && computer==2){
        printf("The computer chose Scissors\nYou Lost!!");
    } 
     else if(player==2 && computer==0){
        printf("The computer chose rock\nYou Lost!!");
    }    
     else if(player==2 && computer==1){
        printf("The computer chose paper\nYou Win!!");
    } 
    return 0;
}
