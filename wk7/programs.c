#include <stdio.h>

void problem0(){
    int arr[3] = {7, 11, 13};
    int *ptr = arr;
    printf("arr[1] == *(ptr + 1): %d\n", arr[1] == *(ptr + 1));
}

void problem1(){
    int arr[10][20];
    printf("problem 1: sizeof arr is %d bytes\n", sizeof(arr));
}

void problem2(){
    int p[6] = {10,20,30,40,50,60};
    int *q = (int *)(p + 3);
    printf("problem 2: q - p = %lu\n", q - p);
}
