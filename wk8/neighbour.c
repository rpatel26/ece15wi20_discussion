#include <stdio.h>
#include <stdlib.h>

void neighbors( int arr[], int nb[], int element, int size ){
    int diff[6] = {};
    int i;
    for(i = 0; i < size; i++){
        int dist = element - arr[i];
        diff[i] = dist;
    }

    int pos = 999999; 
    int neg = -999999;
    for(i = 0; i < size; i++){
        // checking smallest negative number
        if( diff[i] < 0 && diff[i] > neg ){
            nb[1] = arr[i];
            neg = diff[i];
        }

        // checking smallest positive number
        if( diff[i] > 0 && diff[i] < pos ){
            nb[0] = arr[i];
            pos = diff[i];
        }
    }

    if( neg == -999999 ) nb[1] = -9999;
    if( pos == 999999 ) nb[0] = -9999;
}

int main(){
    int arr[6] = {1, 8, 3, 2, 4, 6};
    int nb[2] = {};
    int element = 6;
    neighbors( arr, nb, element, 6 );
    
    printf("orig array....\n");
    int i;
    for(i = 0; i < 6; i++)
        printf("%d ", arr[i]);

    printf("\nelement = %d\n", element);
    printf("nb = { %d, %d }\n", nb[0], nb[1]);
}
