#include <stdio.h>

void problem1(){
    char c = 127;
    c = c + 1;
    printf("%d\n", c);
}

void problem2(){
    float c = 5.0;
    printf("Temperature in Fahrenheit is %.2f\n", (9/5)*c + 32);
}

void problem3(){
    float c = 5.0;
    printf("Temperature in Fahrenheit is %.2f\n", (9.0/5)*c + 32);
}

int main(){
    problem1();
    problem2();
    //problem3();
    return 0;
}
