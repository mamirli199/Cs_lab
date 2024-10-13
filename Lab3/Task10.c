#include <stdio.h>

int main() {
    int a, b, c;
    
    
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        printf("Integers in the range [%d, %d] divisible by %d:\n", a, b, c);
        
        
        for (int i = a; i <= b; i++) {
            if (i % c == 0) {
                printf("%d ", i);  
            }
        }
        printf("\n");  
    }

    return 0;
}
