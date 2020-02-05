#include <stdio.h>

void dataType1(){
    char c = 127;
    c = c + 1;
    printf("%d\n", c);
}

void dataType2(){
    float c = 5.0;
    printf("Temperature in Fahrenheit is %.2f\n", (9/5)*c + 32);
}

void dataType3(){
    float c = 5.0;
    printf("Temperature in Fahrenheit is %.2f\n", (9.0/5)*c + 32);
}

int main(){
    dataType1();
    // dataType2();
    // dataType3();
    return 0;
}
