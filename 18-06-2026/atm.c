#include <stdio.h>
int main(){
    int c;
    int balance = 15000;
    printf("Menu for the atm\n");
    printf("1.To withdraw your money\n");
    printf("2.To deposit your money\n");
    printf("3.To check balance\n");
    printf("Enter your choice");
    scanf("%d",&c);
    //printf("%d",balance);
    switch(c){
        case 1 :
            int withdraw_amount;
            printf("Enter withdrawl amount =");
            scanf("%d",&withdraw_amount);
            balance-= withdraw_amount;
            printf("your current balance=%d",balance);
            break;
        case 2:
            int desposit_amount;
            printf("Enter deposit amount =");
            scanf("%d",&desposit_amount);
            balance+=desposit_amount;
            printf("your current balance=%d",balance);
            break;
        case 3:
            printf("your current balance=%d",balance);
            break;

    }
}