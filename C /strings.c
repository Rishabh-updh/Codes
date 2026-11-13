#include <stdio.h>
#include <string.h>
int main() {
    char name[]="Rishabh";
    char name2[]="Rishabh";
    int t = strcmp(name,name2);
    if (t==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}