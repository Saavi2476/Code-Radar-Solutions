#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);  
    if (n < 2) {
        printf("-1\n");
        return 0;
    }
    int arr[100];  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    int largest = -2147483648;        
    int second_largest = -2147483648; 
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }
    if (second_largest == -2147483648) {
        printf("-1\n");
    } else {
        printf("%d\n", second_largest);  
    }
    return 0;
}
