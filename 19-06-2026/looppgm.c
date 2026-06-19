#include <stdio.h>
int main(){
    int choice=1;
    while(choice==1){
        int ch;
        int n;
        printf("1.print 1 to N numbers\n");
        printf("2.print N to 1 numbers\n");
        printf("Enter choice=");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter N=");
                scanf("%d",&n);
                for(int i=0;i<=n;i++){
                    printf("%d ",i);
                }
                printf("\n");
                break;
            case 2:
                printf("Enter N=");
                scanf("%d",&n);
                for(int i=n;i>0;i--){
                    printf("%d ",i);
                }
                printf("\n");
                break;
            default:
                printf("Invalid choice");
                
        }
        printf("Do You Need To Contiune\n");
        printf("1.yes\n2.No\n");
        printf("Enter your choice");
        scanf("%d",&choice);
    }
}