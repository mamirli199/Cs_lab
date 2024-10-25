#include <stdio.h>

int main() {
    
    
    int n, i, num;
    int min, max;
    int sum = 0;

    
    scanf("%d", &n);

    
    scanf("%d", &num);
    min = max = num; 
    sum += num; 
    
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        sum += num; 
        
        if (num < min) {
            min = num;
        }
        if (num > max) {
            max = num;
        }
    }

    
    sum -= min;
    sum -= max;

    printf("Sum excluding min and max: %d\n", sum); 

    return 0;
}
