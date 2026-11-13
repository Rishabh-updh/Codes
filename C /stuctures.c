#include <stdio.h>
#include <math.h>
#include <time.h>
#include<string.h>
struct Student {
    char name[100];
    int rollnumber;
    float cgpa;
};
int main(){
    struct Student s1;
    s1.rollnumber=25224;
    strcpy(s1.name, "Rishabh");
    s1.cgpa=9.6;

    printf("%s\n",s1.name);
    printf("%d\n",s1.rollnumber);
    printf("%f\n",s1.cgpa);
    return 0;
 }

