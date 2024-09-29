#include<stdio.h>

int main() { 
    float sum = 0, value;
    int n, i = 0;
    
    printf("Enter the number of inputs:\n ");
   
    scanf("%d", &n);
    
    if (n < 0) {
        n = -n;
    }

    printf("Enter the values: \n");
   
    while (i < n) {       
   
        scanf("%f", &value);
        sum = sum + value;
        i++;
    }

    printf("The number of inputs is %d and the sum of inputs is %f\n", n, sum);
    
    return 0;
}
