#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime\n");
    }
    int i;
    for(i=2;i<=num/2;i++){
        if(num%2==0){
            printf("Not Prime\n");
        }
    }
    printf("Prime\n");
    return 0;
}