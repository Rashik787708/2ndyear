#include<stdio.h>
void printa(int n,int arr[]){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *start=arr;
    int *end=arr+(n-1);
    while(start<end){
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printa(n,arr);
    int sum=0;
    int *p=arr;
    for(int i=0;i<n;i++){
        sum = sum + *(p+i);
    }
    printf("\n%d",sum);
}