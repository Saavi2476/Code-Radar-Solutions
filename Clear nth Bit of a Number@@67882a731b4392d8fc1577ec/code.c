#include <stdio.h>
int main(){
    unsigned int num,n;
    scanf("%u %u", &num,&n);
    num=num & ~(1<<n);
    printf("%u",num);
    return 0;
}