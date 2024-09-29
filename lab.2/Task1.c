#include <stdio.h>

int main() {
    int n, i;
    long long sum = 0, product = 1; 
    

    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        int formula = 3 * i - 1;   
        sum += formula;          
        product *= formula;    
                               
    }

    printf("Sum  %d: %lld\n", n, sum);
    printf("Product %d: %lld\n",n ,product );

  

    return 0;
}
