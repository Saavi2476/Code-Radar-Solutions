#include <stdio.h>
int main(){
    double a,b,r;
    char op;
    scanf("%lf%c%lf",&a,&op,&b);
    switch(op){
        case '+':
            r=a+b;
            printf("%.2lf",r);
            break;
        case '-':
            r=a-b;
            printf("%.2lf",r);
            break;
        case '*':
            r=a*b;
            printf("%.2lf",r);
            break;
        case '/':
            if(b!=0){
                r=a/b;
                printf("%.2lf",r);
            }
            else{
                printf("Error: Division by zero");
            }
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}