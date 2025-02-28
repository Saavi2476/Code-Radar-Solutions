#include<stdio.h>
int main(){
    char string[100],strg;
    int reverse=0,digit;
    scanf("%s",&strg);
    string[100]=strg;
    while(strg != 0){
        digit=strg%10;
        reverse=reverse*10+digit;
        strg /= 10;
    }
    printf("%s",string);
    return 0;
}
