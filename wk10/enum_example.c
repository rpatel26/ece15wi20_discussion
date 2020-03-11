#include <stdio.h>

enum month{
    Jan = 1, Feb=5, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

typedef enum{ Mo, Tu, We, Th, Fr, Sa, Su} days;

int main(){
    int year = 2020;
    enum month m;
    days d;

    m = Mar;
    d = We;

    printf("Today is: %d %d %d\n", d, m, year);
    printf("size of enum is: %d\n", sizeof(m));
}
