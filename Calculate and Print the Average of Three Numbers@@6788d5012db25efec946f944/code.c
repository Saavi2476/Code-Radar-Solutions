#include <stdio.h>
int main(){
    float a,b,c;
    printf("");
    scanf("%f",&a);
    printf("");
    scanf("%f",&b);
    printf("");
    scanf("%f",&c);
    int avg = (a+b+c)/3;
    printf("Average: %.2f\n", avg);
    return 0;
}