#include<stdio.h>
void square(int l);
void circle (int m);
void rectangle (int a, int b);
int main(){
    int n;
    printf("Please choose a figure\n ");
    printf("Press 1 for circle\n");
    printf("Press 2 for square\n");
    printf("Press 3 for reactangle\n");
    scanf("%d", &n);
    if(n==1){
        int r;
        printf("Enter the radius of your circle : \n");
        scanf("%d",&r);
        //float a= (r*r)*3.14;
        circle(r); /// yaha pe wo variable aiga jo main func me use kiya gyaa hai //
       //printf(" The area of the given circle is : %f\n",a);
    }
    if(n==2){
        int s;
        printf("Enter the side of your square ; \n");
        scanf("%d",&s);
       // float a = s*s;
        square(s);
       //printf(" The area of the given square is : %f\n",a);
    }
    if(n==3){
        int a,b;
        printf("Enter the side 1 of your rectangle ; \n");
        scanf("%d",&a);
        printf("Enter the side 2 of your rectangle ; \n");
        scanf("%d",&b);
        //float g = (a*b);
        rectangle(a,b);
        //printf(" The area of the given rectangle is : %f\n",g);
    }
   
    return 0;
}
void  square(int l){
    printf(" The area of the given square is : %d\n",l*l);
}
void circle(int m){
    printf("The are of the given circle is : %f\n",m*m*3.14);
}
void rectangle( int a, int b){
    printf("The area of the given rectangle is : %d\n",a*b);
}