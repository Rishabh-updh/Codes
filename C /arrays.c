#include <stdio.h>

int main() {
float price[3];
printf("Enter the price of the three items you have bought : \n");
scanf("%f %f %f",&price[0],&price[1],&price[2]);
price[0] = price[0]+(price[0]*18)/100;
price[1] = price[1]+(price[1]*18)/100;
price[2] = price[2]+(price[2]*18)/100;
    printf("The final price of the items is :  ₹%f  ₹%f  ₹%f \n",price[0],price[1],price[2]);
    return 0;
}