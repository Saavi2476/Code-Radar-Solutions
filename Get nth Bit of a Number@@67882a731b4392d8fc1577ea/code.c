#include <stdio.h>
int main(){
    unsigned int num, n;
    scanf("%u %u", &num, &n);
    unsigned int bit_value =(num>>n)&1;
    printf("%u",bit_value);
    return 0;
}