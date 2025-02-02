#include <stdio.h>
int main(){
    int a,b,r;
    char op;
    scanf("%d %c %d",&a,&op,&b);
    switch(op){
        case '+':
            r=a+b;
            printf("%d\n",r);
            break;
        case '-':
            r=a-b;
            printf("%d\n",r);
            break;
        case '*':
            r=a*b;
            printf("%d\n",r);
            break;
        case '/':
            if(b!=0){
                r=a/b;
                printf("%d\n",r);
            }
            // else{
            //     printf("Error\n");
            // }
            break;
        // default:
        //     printf("Error\n");
    }
    return 0;
}