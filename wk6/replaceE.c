#include <stdio.h>

void replaceE(char string[]){
    int i = 0, length = 0;
    
    while( string[i] != '\0' ){
        length++;
        i++;
    }

    for(i = 0; i < length; i++){
        if( string[i] == 'e' )
            string[i] = 'E';
    }
}

int main(){
    char string[] = "sentence";
    printf("before: %s\n", string);
    replaceE(string);
    printf("after: %s\n", string);
    return 0;
}
