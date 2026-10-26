#include <stdio.h>

int main() {
    int studentID;
    char name[50];
    int age;
    char course[50];
    int yearLevel;

    printf("===== STUDENT INFORMATION SYSTEM =====\n\n");

    printf("Enter Student ID: ");
    scanf("%d", &studentID);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Course: ");
    scanf(" %[^\n]", course);

    printf("Enter Year Level (1-4): ");
    scanf("%d", &yearLevel);

    printf("\n===== STUDENT INFORMATION =====\n");
    printf("Student ID : %d\n", studentID);
    printf("Name       : %s\n", name);
    printf("Age        : %d\n", age);
    printf("Course     : %s\n", course);
    printf("Year Level : %d\n", yearLevel);

    return 0;
}
