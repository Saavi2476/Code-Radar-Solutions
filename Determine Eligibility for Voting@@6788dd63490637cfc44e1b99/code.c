#include <stdio.h>
int main(){
    int age;
    int voting_age=18;
    scanf("%d",&age);
    if(age>=voting_age){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}