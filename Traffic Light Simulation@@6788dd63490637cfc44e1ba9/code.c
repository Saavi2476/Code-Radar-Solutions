#include <stdio.h>
int main(){
    char traffic;
    switch(traffic){
        case 'R':
            printf("Stop");
            break;
        case 'G':
            printf("Go");
            break;
        case 'Y':
            printf("Slow Down");
            break;
    }
    return 0;
}