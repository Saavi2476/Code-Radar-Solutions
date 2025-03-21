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
    k=k%n;
    for(i=0;j=n-1;i<j;i++;j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;j=k-1;i<j;i++;j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=k;j=n-1;i<j;i++;j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}