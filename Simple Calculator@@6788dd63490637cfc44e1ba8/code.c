#include <stdio.h>
int main(){
    double a,b,r;
    char op;
    scanf("%lf%lf%c",&a,&b,&op);
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
                printf("%.2lf",a/b);
            }
            break;
    }
    return 0;
}