#include <stdio.h>
int main(){
    int decimal;
    int size=sizeof(int)*8;
    scanf("%d",&decimal);
    if(decimal==0){
        printf("0");
        return 0;
    }
    for(int i=size-1; i>=0; i--){
        int bit =(decimal>>i)&1;
        printf("%d",bit);
    }
    printf("\n");
    return 0;
}