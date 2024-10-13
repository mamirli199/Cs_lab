#include <stdio.h>

int main()
{
    int a, b, sum = 0, n, k;

   
    printf("Enter two positive integers (a and b): ");
    scanf("%d%d", &a, &b);
    printf("Enter a positive integer k: ");
    scanf("%d", &k);

    
    if (a > b) {
        
        int c = a;
        a = b;
        b = c;
    }

   
   for(n=a;n <= b;n++);
    {
        if (n % k == 0) {
            sum = sum + n;  
        }
         
    }

      printf("Elements in the range [%d, %d] that are divisible by %d is %d\n", a, b, k, sum);

    return 0;
}