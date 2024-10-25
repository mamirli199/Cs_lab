#include <stdio.h>

int main() {
    int fib[50]; 
    int x, y, i, found;

    
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; fib[i-1] + fib[i-2] <= 3000; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    int fib_count = i; 

    
    while (scanf("%d %d", &x, &y) != EOF) {
        found = 0;

        
        for (i = 0; i < fib_count; i++) {
            if (fib[i] >= x && fib[i] <= y) {
                if (found == 0) {
                    printf("%d", fib[i]);
                } else {
                    printf(" %d", fib[i]);
                }
                found = 1;
            }
        }

       
        if (!found) {
            printf("DO NOT EXIST");
        }

        puts("");
    }

    return 0;
}
