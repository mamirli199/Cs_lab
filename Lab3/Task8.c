#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int count = 1;
    
    
    for (int i = 1; i <= n; i++) {
      
        for (int j = 1; j <= n; j++) {
            printf("%d ", count);
            count++;
        }
        printf("\n"); 
    }
    
    return 0;
}
