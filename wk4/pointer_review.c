#include <stdio.h>

int main(){
    int a, b;
    int *ptr;

    a = 4;
    ptr = &a;
    b = *ptr + 1;
    *ptr = b + 3;

    printf("value of a = %d\n", a);         // print 1
    printf("value of b = %d\n", b);         // print 2
    printf("value of &a = %lu\n", &a);       // print 3
    printf("value of ptr = %lu\n", ptr);     // print 4
    printf("value of *ptr = %d\n", *ptr);   // print 5
    return 0;
}
