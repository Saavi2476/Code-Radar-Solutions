#include <stdio.h>
#include<math.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num<=1){
        printf("Not Prime\n");
        return 0;
    }
    int i;
    for(i=2;i<=sqrt(num);i++){
        if(num%2==0){
            printf("Not Prime\n");
            return 0;
        }
    }
    printf("Prime\n");
    return 0;
}