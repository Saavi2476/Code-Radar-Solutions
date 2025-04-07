// #include<stdio.h>
// int main(){
//     int n,i;
//     int even=0,odd=0;
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     if(arr[i]%2==0){
//         even++;
//     }
//     else{
//         odd++;
//     }
//     printf("%d %d\n",even,odd);
//     return 0;
// }
#include <stdio.h>

int main() {
    int n, i;
    int even = 0, odd = 0;

    // Read the number of elements
    scanf("%d", &n);
    int arr[n];

    // Read the array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        // Check if the element is even or odd
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    // Print the counts: even first, then odd
    printf("%d %d\n", even, odd);

    return 0;
}
