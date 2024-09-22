#include <stdio.h>
#include <stdlib.h> 
 

int main() {
   
    int n, first_digit, middle_digit, last_digit, greatest, smallest;
    
    
    scanf("%d", &n);
    n = abs(n);

    
    
    first_digit = n / 100;          
    middle_digit = (n / 10) % 10;   
    last_digit = n % 10;            
    
    
    greatest = first_digit;
    smallest = first_digit;
    
    if (middle_digit > greatest) greatest = middle_digit;
    if (last_digit > greatest) greatest = last_digit;
    
    if (middle_digit < smallest) smallest = middle_digit;
    if (last_digit < smallest) smallest = last_digit;
    
    
    printf("Greatest digit: %d\n", greatest);
    printf("Smallest digit: %d\n", smallest);
    
    return 0;
}
