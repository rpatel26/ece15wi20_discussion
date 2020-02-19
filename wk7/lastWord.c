#include <stdio.h>

int lengthOfLastWord( char * str ){
    char * ptr = str;
    while( *ptr != '\0' )
        ptr++;

    ptr--;
    int length = 0;
    while( *ptr != ' ' ){
        if( ptr == str )
            return ++length;
        length++;
        ptr--;
        if( ptr == str )
            return ++length;

    }

    return length;
}

int main(){
    char * str = "Hello World";
    printf("original string: %s\n", str);
    printf("length of last word: %d\n", lengthOfLastWord( str ));

    char * str2 = "hello";
    printf("original string: %s\n", str2);
    printf("length of last word: %d\n", lengthOfLastWord( str2 ));

    char * str3 = " ";
    printf("original string: %s\n", str3);
    printf("length of last word: %d\n", lengthOfLastWord( str3 ));

    return 0;
}
