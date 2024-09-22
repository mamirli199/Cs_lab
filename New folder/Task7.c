#include <stdio.h>

int main() {
    
    int  radius ,width, length, height;
    
    printf("Enter the radius , length, height of the box and width of the basketball:\n ");
   
    scanf("%d %d %d %d", &radius , &width, &length, &height);
    
    int diameter = 2 * radius;
    
    if (diameter <= width && diameter <= length  ) {
       
        printf("The basketball can fit into the box.\n");
    
    } else {
       
        printf("The basketball cannot fit into the box.\n");
    
    }
    
    return 0;
}
