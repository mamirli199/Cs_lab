#include<stdio.h>

int main(){
    
    int A;
    printf("An integer");
    
    scanf("%d",&A);

    if (A%6==0)
   
    printf("Exellent\n");

    else if (A%2==0||A%3==0)

    printf("Ok\n");
   
    else if (A%2!=0||A%3!=0) {
        printf("Noo\n");
    }
    
    


    return 0;
}