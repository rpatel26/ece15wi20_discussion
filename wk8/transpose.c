#include <stdio.h>

#define SIZE    3

void print_array( char arr[][SIZE] ){
    int i, j;
    for(i = 0; i < SIZE; i++){
        for(j = 0; j < SIZE; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void transpose(char arr[][SIZE] ){
    printf("Before Transpose\n");
    print_array( arr );
    int i, j;
    for(i = 0; i < SIZE; i++){
        for(j = i+1; j < SIZE; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("After Transpose\n");
    print_array( arr );
}

int main(){
    char arr[][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    transpose( arr );

}
