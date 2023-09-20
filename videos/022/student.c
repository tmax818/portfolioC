#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Define a struct student with members name, id, age, grades
typedef struct 
{
  char name[50];
  char id[10];
  int age;
  int grades[5];
} Student;

// prints out a Student struct's member values
void print_student(Student student)
{
  printf("Name: %s\n", student.name);
  printf("ID: %s\n", student.id);
  printf("Age: %d\n", student.age);
  printf("Grades: ");
  for (int i = 0; i < 5; i++)
    printf("%d ", student.grades[i]);
  printf("\n");
}

Student create_student(char name[50], char id[10], int age, int grades[5]){
    Student newStudent;
    strcpy(newStudent.name, name);
    strcpy(newStudent.id, id);
    newStudent.age = age;
    for(int i = 0; i < 5; i++){
        newStudent.grades[i] = grades[i];
    }

    return newStudent;


}

int main(){

    int grades[] = {23, 34, 45, 67, 78};
    Student kevin = create_student("Kevin", "8675309", 40, grades);

    print_student(kevin);
}