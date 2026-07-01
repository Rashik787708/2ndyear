#include<stdio.h>
void search(int n,int arr[],int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            printf("%d",i);
            break;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    search(n,a,target);

}