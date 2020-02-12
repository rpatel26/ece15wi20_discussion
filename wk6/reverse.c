#include <stdio.h>

void reverse ( char string[] ){
   int length = 0;
   while( string[length] != '\0' )
        length++;

    int start = 0;
    int end = length - 1;
    while( start < end ){
        char c = string[start];
        string[start] = string[end];
        string[end] = c;
        start++;
        end--;
    }
}

int main(){
    char str[] = "ABCD123";
    printf("Before: %s\n", str);
    reverse(str);
    printf("After: %s\n", str);
    return 0;
}
