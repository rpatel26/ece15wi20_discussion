#include <stdio.h>

typedef struct{
    char * last_name;
    char * first_name;
    int id_number;
    double * scores;
    int num_exam_scores;
}Student;

double exam_average(Student * stu){
    return 0;
}

int main(){
    double scores[] = {1, 2, 2, 3, 6, 4, 5, 6, 7, 8, 9, 10};
    Student stu = {"Bar", "Foo", 12345678, scores, 12};
    printf("Average exam scores: %f\n", exam_average( &stu ) );
}
