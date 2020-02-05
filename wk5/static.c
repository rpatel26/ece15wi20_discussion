#include <stdio.h>


int main(){
    static int num = 3;
    if(--num){
        main();
        printf("num = %d\n", num);
    }
    return 0;
}
