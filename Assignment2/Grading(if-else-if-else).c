#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // Ask user for the number of students
    printf("Enter the number of students (N): ");
    scanf("%d", &n);

    // Loop through each student
    for (int i = 1; i <= n; i++) {
        char regNo[30];
        char name[50];
        int marks;
        char grade;

        printf("\n--- Enter Details for Student %d ---\n", i);

        // Input registration number, name, and marks
        printf("Enter Registration Number: ");
        scanf("%s", regNo);

        printf("Enter Name: ");
        scanf("%s", name);

        printf("Enter Marks (0-100): ");
        scanf("%d", &marks);

        while (marks < 0 || marks > 100){
            printf("Invalid marks! Please enter a value between 0 and 100: ");
            scanf("%d",&marks);
        }

        // Determine grade using if - else if - else ladder
        if (marks >= 70 && marks <= 100) {
            grade = 'A';
        } else if (marks >= 60 && marks <= 69) {
            grade = 'B';
        } else if (marks >= 50 && marks <= 59) {
            grade = 'C';
        } else if (marks >= 40 && marks <= 49) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        // Display formatted student information
        printf("\n------------------------------------\n");
        printf("         STUDENT INFORMATION        \n");
        printf("------------------------------------\n");
        printf("Registration No: %s\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        // Determine and display Pass/Fail status
        if (marks >= 40) {
            printf("Status: Passed\n");
        } else {
            printf("Status: Failed\n");
        }
        printf("------------------------------------\n");
    }

    return 0;
}
