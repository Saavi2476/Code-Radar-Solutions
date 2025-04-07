#include<stdio.h>
int main(){
    int n,k;
    int i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k=k%10;
    j=n-1;
    for(i=0;i<j;i++;j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    j=k-1;
    for(i=0;i<j;i++;j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    j=n-1;
    for(i=k;i<j;i++;j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}