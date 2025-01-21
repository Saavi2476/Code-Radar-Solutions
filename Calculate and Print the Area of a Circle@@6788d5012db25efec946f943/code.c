#include <stdio.h>
int main(){
    float radius;
    printf("");
    scanf("%f",&radius);
    float pi = 3.14;
    float area = pi * radius * radius;
    printf("Area: %.2f\n", area);
    return 0;
}