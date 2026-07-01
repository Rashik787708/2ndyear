#include<stdio.h>
#include<string.h>
#include<ctype.h>
void stringAnalyse(char string[]){
    int count=0;
    for(int i=0;i<strlen(string);i++){
        count++;
    }
    printf("%d\n",count);
    char rev[100];
    strcpy(rev,string);
    strrev(rev);
    printf("%s \n", rev);
    if(strcmp(rev,string)==0){
        printf("Pallindrome");
    }
    else{
        printf("Not Pallindrome");
    }

}
int main(){
    char string[100];
    scanf("%[^\n]",string);
    stringAnalyse(string);
}