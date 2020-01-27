#include <stdio.h>

void swap( int *a, int *b ){
    // swap the value of 'a' and 'b'
}

int main(){
    int x = 6, y = 2;
    
    printf("value of x before swap: %d\n", x);
    printf("value of y before swap: %d\n", y);
    
    swap( &x, &y );
    
    printf("value of x after swap: %d\n", x);
    printf("value of y after swap: %d\n", y);
}
