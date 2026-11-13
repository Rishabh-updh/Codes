#include<stdio.h>
void gst(int n);
int main(){
  int n;
  printf("Enter the price of the product : \n");
  scanf(" %d", &n);
  gst(n);
  return 0;
    } 
    void gst(int n){
        int r;
        r=(n*18)/100;
        printf(" final price of the product is :%d\n",n+r);
    }
    
    