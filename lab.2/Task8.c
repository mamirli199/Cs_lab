#include<stdio.h>

int main() {
    int a = 0, b = 1, fib, n, i;

   
    scanf("%d", &n);

    // Handle base cases
    if (n == 0) {
        printf("%d", a);
    } else if (n == 1) {
        printf("%d", b);
    } else {
       
        for (i = 2; i <= n; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
        printf("%d", fib);
    }

    return 0;
}
