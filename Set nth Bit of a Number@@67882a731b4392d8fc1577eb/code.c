#include <stdio.h>
int setNthBit(int num, int n){
    num |= (1<<n);
    return num;
}
int main(){
    int num,n;
    scannf("%d %d", &num, &n);
    printf("%d",setNthBit(num,n));
    return 0;
}