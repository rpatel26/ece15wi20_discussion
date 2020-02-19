#include <stdio.h>

void capitalized( char str[] ){
    char * ptr = str;
    printf("before capitalized: %s\n", str);
    if( ptr != '\0' && *ptr >= 'a' )
        *ptr = *ptr - 0x20;

    while( *ptr != '\0' ){
        if( *ptr == ' ' ){
            ptr++;
            if( *ptr >= 'a' ){
                *ptr = *ptr - 0x20;
            }
        }
        else{ ptr++; }
    }
    printf("after capitalized: %s\n", str);
}

int main(){
    char str[] = "this is a Karel test";
    capitalized( str );
    return 0;
}
