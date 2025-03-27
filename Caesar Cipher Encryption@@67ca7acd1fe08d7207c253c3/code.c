#include<stdio.h>
#include<ctype.h>
#include<string.h>
void caesarCipher(char message[], int shift, char encrypted[]){
    for(int i=0;message[i]!= '\0';i++){
        char ch=message[i];
        if(isalpha(ch)){
            char base=isupper(ch)?'A':'a';
            encrypted[i]=(ch-base+shift)%26+base;
        }
        else{
            encrypted[i]=ch;
        }
    }
    encrypted[strlen(message)]='\0';
}
int main(){
    char message[100],encrypted[100];
    int shift;
    scanf("%[^\n]",message);
    getchar();
    scanf("%d",&shift);
    shift=(shift&26+26)%26;
    caesarCipher(message,shift,encrypted);
    printf("%s\n",encrypted);
    return 0;
}