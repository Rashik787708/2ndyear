#include <stdio.h>
int main(){
    int ch=1;
    while(ch==1){
        printf("1.fibonacci series\n");
        printf("2.Armstrong number\n");
        printf("3.Prime number\n");
        printf("4.Reverse number\n");
        int mch;
        printf("Enter your choice=");
        scanf("%d",&mch);
        switch(mch){
            case 1:
                int a=0;
                int count=0;
                int b=1;
                int c;
                int num;
                printf("Enter the series length=");
                scanf("%d",&num);
                while(count<num){
                    printf("%d ",a);
                    c=a+b;
                    a=b;
                    b=c;
                    count++;
                }
                break;
            case 2:
                int num2;
                printf("Enter the number=");
                scanf("%d",&num2);
                int temp=num2,sum=0;
                while(num2>0){
                    int r=num2%10;
                    sum = sum +(r*r*r);
                    num2=num2/10;
                }
                if(temp==sum){
                    printf("Armstrong Number\n");
                }
                else{
                    printf("Not an Armstrong Number\n");;
                }
                break;
            case 3:
                int n;
                printf("Enter the Number=");
                scanf("%d",&n);
                int flag=0;
                for(int i=2;i<n;i++){
                    if(n%i==0){
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    printf("Prime Number\n");
                }
                else{
                    printf("Not an Prime Number\n");
                }
                break;
            case 4:
                int num1;
                printf("Enter the number=");
                scanf("%d",&num1);
                int sum1=0;
                while(num1>0){
                    int x = num1%10;
                    sum1 =sum1*10 + x;
                    num1=num1/10;
                }
                printf("Reversed Number=%d\n",sum1);
                break;
            default:
                printf("Wrong choice");
        }
        printf("\ndo you want to contiune \n1.yes\n2.no\n");
        printf("Enter your choice=");
        scanf("%d",&ch);
    }
}