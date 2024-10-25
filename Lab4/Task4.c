#include <stdio.h>

int main() {
    int n, idx, el;

    
    scanf("%d", &n);
    int arr[n];

    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d %d", &idx, &el);

    
    if (idx < 0 || idx > n) {
        printf("Invalid input\n");
        return 0;
    }

    
    for (int i = n; i > idx; i--) {
        arr[i] = arr[i - 1];
    }

    
    arr[idx] = el;

    
    for (int i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
