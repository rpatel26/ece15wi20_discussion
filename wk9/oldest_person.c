#include <stdio.h>
#include <stdlib.h>

#define ELEMENTS 10

typedef struct{
    int age;
    double height;
} Person;

void init_persons( Person * ptr ){
    Person * temp = ptr;
    int i;
    for( i = 0; i < ELEMENTS; i++ ){
        temp->age = i*2;
        temp->height = 0;
        temp++;
    }
}

Person * oldest_person( Person * ptr ){
    return NULL;
}

int main(){
    Person *ptr = (Person *)malloc( ELEMENTS * sizeof(Person) );
    init_persons( ptr );    // initialize all the persons with age and height
    Person * oldest = oldest_person( ptr );
    printf("This is the olderse person's age: %d\n", oldest->age);
}
