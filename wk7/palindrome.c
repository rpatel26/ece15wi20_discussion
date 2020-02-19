#include <stdio.h>

void isPalindrome( char string[] ){
    char * ptr = string;
    int length = 0;
    while( *ptr != '\0' ){
        length++;
        ptr++;
    }

    char * front = string;
    char * end = string + length - 1;
    while( front < end ){
        if( *front != *end ){
            printf("%s is not a palindrome\n", string);
            return;
        }
        front++;
        end--;
    }
    printf("%s is a palindrome\n", string);
}

int main(){
    isPalindrome( "tacocat" );
    isPalindrome( "sentence" );
    isPalindrome( "" );
    return 0;
}
