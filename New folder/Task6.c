#include <stdio.h>

int main() {
    int t1, t2, t3, t4, x;
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    
     x = t1;
    
    if (t2 >x)
    
        x= t2;
    
    if (t3 > x)
    
       x = t3;
   
    if (t4 > x)
   
      x = t4;
   
    printf("%d", x);
   
    return 0;
}