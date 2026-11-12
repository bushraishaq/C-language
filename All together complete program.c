#include <stdio.h>

int main(){
    //variables declaration
    int student_id;
    float student_gpa;
    char student_grade;

    //user input
    printf("Enter your student ID: ");
    scanf("%d", &student_id);

    printf("Enter your student GPA: ");
    scanf("%f", &student_gpa);

    printf("Enter your student grade: ");
    scanf(" %c", &student_grade);
    //note the space before %c to ignore mewline

    //output
    printf("Student Record:\n");
    printf("Student ID: %d\n", student_id);
    printf("Student GPA: %.2f\n", student_gpa);
    printf("Student Grade: %c\n", student_grade);

    return 0;

    
}