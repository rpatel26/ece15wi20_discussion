#include <stdio.h>

double average( int * arr, int size ){
    int i, sum = 0;
    for( i = 0; i < size; i++ ){
        sum += arr[i];
    }
    return sum / (double) size;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    double avg = average( arr, 5 );
    printf("The average is %0.2f\n", avg);
    return 0;
}
