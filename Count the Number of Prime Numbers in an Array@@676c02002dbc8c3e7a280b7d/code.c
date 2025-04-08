#include <stdio.h>
#include <math.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}
int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}