#include <stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    if(mark>=91 && mark <=100){
        printf("S grade");
    }
    else if(mark>=81 && mark <=90){
        printf("A+ grade");
    }
    else if(mark>=71 && mark <=80){
        printf("A grade");
    }
    else if(mark>=61 && mark <=70){
        printf("B+ grade");
    }
    else if(mark>=51 && mark <=60){
        printf("B grade");
    }
    else{
        printf("RA");
    }
}