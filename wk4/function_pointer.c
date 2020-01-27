#include <stdio.h>

void square( int x ){
   x = x * x; 

}

void pointer_square( int *x_ptr ){
    *x_ptr = *x_ptr * *x_ptr;
}

int main(){
    int a = 4;
    square( a );
    printf("Value of a after square: %d\n", a);

    pointer_square( &a );
    printf("Value of a after pointer square: %2d\n", a);

    return 0;
}
