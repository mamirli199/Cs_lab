#include<stdio.h>
int main() {
    int n;
    
    printf("Provide integers of values in the array\n");
    scanf("%d", &n);
    long arr[n+1];
    
    printf("Provide integers of the array\n");
    for (int i = 0; i<n; i++){
        scanf("%lu", &arr[i]);
    }
    int el;   
    
    printf("Provide element you'd like to add\n");
    
    scanf("%d", &el);
    
    for (int i = 0; i<n; i++){
        if ((arr[i]<el)&&(arr[i+1]>el)){
            int trm;
            trm = arr[i+1];
            arr[i+1] = el;
            arr[i+2] = trm;

        } 
    }
    
    for (int i = 0; i<n+1; i++){
    
        printf("The array is %lu\n", arr[i]);
    
    }
    
    return 0;

}

