#include <stdio.h>

void reverse_array( char arr[], int length ){
    char reversed[length];
    int i;
    for( i = 0; i < length; i++ ){
        reversed[i] = arr[ length - i - 1 ];
    }
    printf("The original array is %s\n", arr);
    printf("The reversed array is %s\n", reversed);
}

int main(){
    char c[] = {'a', 'b', 'c', 'd', 'e'};
    reverse_array( c, 5 );
}
