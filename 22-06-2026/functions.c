#include<stdio.h>
#include <math.h>
void armstrong(int n){
    int temp=n,count=0,sum=0;
    while(temp>0){
        count++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0){
        int r=temp%10;
        sum = sum + pow(r,count);
        temp= temp/10;
    }
    if(sum==n){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong");
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    armstrong(n);
    return 0;
}