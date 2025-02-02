#include <stdio.h>
void decimalToBinary(int n){
    for (int i = 31; i>=0; i--){
        int bit = (n >> i) & 1;
        if (bit==1 || i < 31){
            printf("%d",bit);
        }
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    decimalToBinary(n);
    return 0;
}