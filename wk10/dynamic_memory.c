#include <stdlib.h>

int * g1(){
    int x  = 10;
    return &x;
}

int * g2() {
    int * ptr;
    *ptr = 10;
    return ptr;
}

int * g3() {
    int * ptr;
    ptr = (int *) malloc( sizeof( int ) );
    *ptr = 10;
    return ptr;
}

int main(){
    return 0;
}
