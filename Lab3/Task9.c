#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

   
    for (int i = 1; i <= n; i++) {
       
        for (int j = 0; j < n; j++) {
            printf("%d ", i + j * n);
        }
        printf("\n");
    }
    
    return 0;
}
