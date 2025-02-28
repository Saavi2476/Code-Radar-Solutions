#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<j;i++){
        for(int j=0;j=len-1;j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        }
    }
    printf("%s\n",str);
    return 0;
}
