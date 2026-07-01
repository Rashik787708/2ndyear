#include<stdio.h>
void student(int arr[5]){
    int sum=0,max=arr[0],min=arr[0];
    for(int i=0;i<5;i++){
        sum = sum + arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int avg=sum/5;
    printf("Total marks=%d\n",sum);
    printf("Maximum mark=%d\n",max);
    printf("Minimum mark=%d\n",min);
    printf("Average Mark=%d",avg);
    
}
int main(){
    int a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    student(a);
}