#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    int i=0,j=len-1;
    for(;i<j;i++;j--){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("%s\n",str);
    return 0;
}
