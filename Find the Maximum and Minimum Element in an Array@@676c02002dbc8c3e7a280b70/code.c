#include<stdio.h>
int main(){
    int n,i;
    int large,small;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    large=small=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
        if(arr[i]<small){
            small=arr[i];
        }
    }
    printf("%d \n",small);
    printf("%d\n",large);
    return 0;
}