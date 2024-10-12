#include <stdio.h>
#include<time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    int computer = rand() % 3;
    int player;
    while(1){
    printf("\n--------------------------------------");
    printf("\nLets paly Rock Paper Scissors Game!!!");
    printf("\n0-->Rock \n1-->Paper\n2-->Scissors\n3-->Exit\nSelect a number\n");
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
    else if(player==3){
        break;
    }
}

    return 0;
}
