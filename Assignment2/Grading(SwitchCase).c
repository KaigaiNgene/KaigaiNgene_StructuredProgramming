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

        // Input marks with validation (rejects < 0 or > 100)
        printf("Enter Marks (0-100): ");
        scanf("%d", &marks);

        while (marks < 0 || marks > 100) {
            printf("Invalid marks! Please enter a value between 0 and 100: ");
            scanf("%d", &marks);
        }

        // Determine grade using switch-case via integer division (marks / 10)
        switch (marks / 10) {
            case 10: // 100 marks
            case 9:  // 90-99 marks
            case 8:  // 80-89 marks
            case 7:  // 70-79 marks
                grade = 'A';
                break;
            case 6:  // 60-69 marks
                grade = 'B';
                break;
            case 5:  // 50-59 marks
                grade = 'C';
                break;
            case 4:  // 40-49 marks
                grade = 'D';
                break;
            default: // Below 40 marks
                grade = 'F';
                break;
        }

        // Display formatted student information
        printf("\n------------------------------------\n");
        printf("         STUDENT INFORMATION        \n");
        printf("------------------------------------\n");
        printf("Registration No: %s\n", regNo);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        // Determine and display Pass/Fail status using switch-case
        switch (marks >= 40) {
            case 1:
                printf("Status: Passed\n");
                break;
            case 0:
                printf("Status: Failed\n");
                break;
        }
        printf("------------------------------------\n");
    }
    return 0;
}
