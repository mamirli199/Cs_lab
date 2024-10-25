#include<stdio.h>

int main() {
    int n;
    printf("provide number of values in the array\n");
    
    scanf("%d", &n);
    long arr[n];
    int k;
    scanf("%d", &k);
    
    printf("Provide the values of the array\n");
    
    for (int i = 0; i<n; i++){
    
        scanf("%lu", &arr[i]);
    
    }
    
    for (int i = n -1; i>=0; i--){
    
        if (((n-1) % k) == 0){
    
            printf("\n");
    
        }
    
        printf("%lu", arr[i]);
    }
    return 0;
} 