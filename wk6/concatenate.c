#include <stdio.h>

void fullName( char first[], char last[], char full[] ){
    int i = 0; 
    while( first[i] != '\0' ){
        full[i] = first[i];
        i++;
    }
    full[i++] = ' ';
    
    int j = 0;
    while( last[j] != '\0' ){
        full[i] = last[j];
        j++;
        i++;
    }
}

int main(){
    char first[] = "John";
    char last[] = "Snow";
    char full[41];

    fullName(first, last, full);
    printf("full name: %s\n", full);
    return 0;
}
