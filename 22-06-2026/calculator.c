#include <stdio.h>
int add(int a,int b){
    return a+b;
}
int subract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
} 
int divide(int a,int b){
    return a/b;
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("A=%d B=%d\n",num1,num2);
    printf("Addition=%d\n",add(num1,num2));
    printf("Subbraction=%d\n",subract(num1,num2));
    printf("Multiplication=%d\n",multiply(num1,num2));
    printf("Division=%d\n",divide(num1,num2));
    return 0;
}