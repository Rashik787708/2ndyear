#include<stdio.h>
void freq(int n,int arr[]){
    int j;
    for(int i=0;i<n;i++){
        int count=0;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                break;
            }
        }
        if(i==j){
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            printf("%d - %d\n",arr[i],count);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    freq(n,arr);
}