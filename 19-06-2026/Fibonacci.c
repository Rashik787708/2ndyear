#include <stdio.h>
int main(){
    int a=0,b=1;
    int num;
    int c;
    int count=0;
    scanf("%d",&num);
    while(count<num){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
        count++;
    }
    return 0;
}