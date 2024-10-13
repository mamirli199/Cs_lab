#include <stdio.h>

int main() {
    int x1, v1, x2, v2, t;

    
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

   
    for (t = 0; t < 10000; t++) {
        if (x1 + t * v1 == x2 + t * v2) {
            printf("%d %d\n", x1 + t * v1, t);
            return 0;
        }
    }

    printf("NEVER\n");
    
    return 0;
}
