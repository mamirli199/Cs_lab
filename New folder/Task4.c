#include <stdio.h>
#include <math.h>  
int main() {
   int a, b, c;
   double Delta, root1, root2;
   scanf("%d%d%d", &a, &b, &c);
   Delta = (b * b) - (4 * a * c);
   
    if (Delta > 0) {
     
       root1 = (-b + sqrt(Delta)) / (2 * a);
       root2 = (-b - sqrt(Delta)) / (2 * a);
       printf("%.2lf %.2lf\n", root1, root2);
   } else if (Delta == 0) {
       
       root1 = -b / (2 * a);
       printf("%.5lf\n", root1);
   } else {
      
       printf("No real roots\n");
   }

   return 0;
}
