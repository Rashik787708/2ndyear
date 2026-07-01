#include<math.h>
#include<stdio.h>
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
        printf("Armstrong number\n");
    }
    else{
        printf("Not an Armstrong\n");
    }
    
}
void nums(int n,int arr[]){
    for(int i=0;i<n;i++){
        armstrong(arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    nums(n,a);
}