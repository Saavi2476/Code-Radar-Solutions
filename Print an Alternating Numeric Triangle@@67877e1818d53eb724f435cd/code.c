#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==1){
                printf("1");
                if(i==2 && j==1) printf(" ");
            }
            else{
                printf("0");
                if(i==2 && j==1) printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}