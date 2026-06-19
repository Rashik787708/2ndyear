#include <stdio.h>
int main(){
    int size;
    printf("Enter size =");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    for(int i=size;i>0;i--){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}