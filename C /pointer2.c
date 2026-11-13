#include <stdio.h>

int main() {
    float price = 100;
    float *ptr =&price;
    float **pptr = &ptr;
    // printf("price = %f \n",price);
    // printf("*ptr = %f \n",*ptr);
    printf("**pptr = %f \n",**pptr);
    
    return 0;
}