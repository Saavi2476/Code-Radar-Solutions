#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        printf("%d\n",arr[0]);
        return 0;
    }
    for(i=0;i<n;i++){
        if(i==0){
            if(arr[i]>arr[i+1]){
                printf("%d\n",arr[i]);
                return 0;
            }
        }
        else if(i==n-1){
            if(arr[i]>arr[i-1]){
                printf("%d\n",arr[i]);
                return 0;
            }
            
        }
        else{
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                printf("%d\n",arr[i]);
                return 0;
            }
            
        }
    }
    printf("-1\n");
    return 0;
    
}
// #include<stdio.h>
// int main() {
//     int n, i;
//     scanf("%d", &n);
//     int arr[n];
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     if (n == 1) {
//         printf("%d\n", arr[0]);
//         return 0;
//     }
//     for (i = 0; i < n; i++) {
//         if (i == 0) {
//             if (arr[i] > arr[i + 1]) {
//                 printf("%d\n", arr[i]);
//                 return 0;
//             }
//         } else if (i == n - 1) {
//             if (arr[i] > arr[i - 1]) {
//                 printf("%d\n", arr[i]);
//                 return 0;
//             }
//         } else {
//             if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
//                 printf("%d\n", arr[i]);
//                 return 0;
//             }
//         }
//     }

//     // If no peak found
//     printf("-1\n");
//     return 0;
// }

