#include <stdio.h>
int sum(int a,int b){
    return a+b;
}

int main(){
    printf("Hello world!\n");
    int x,y;
    scanf("%d %d",&x,&y);
    x = x + y;
    y= x - y;
    x=x-y;
    printf("Github complete!");
    printf("%d %d\n",x,y);
    printf("%d",sum(x,y));

}
