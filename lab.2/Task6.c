#include<stdio.h>

int main() {
    
    int n, count = 1, variable = 0;

    puts("Enter the number: ");
    scanf("%d", &n);
    
   
    int isNegative = (n < 0);
    if (isNegative) {
        n = -n; 
    }

    while(n != 0) {
        int d; 
        d = n % 10; 
        n = n / 10; 

        if (d != 0) { 
            variable = variable + d * count; 
            count = count * 10; 
        }
    }
    
    
    if (isNegative) {
        variable = -variable;
    }

    printf("Resulting : %d\n", variable);
    
    return 0;
}
