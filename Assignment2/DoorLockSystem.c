#include <stdio.h>
#include <string.h>

#include <windows.h>
#define SLEEP_1_SEC() Sleep(1000)


int main() {
    const char correct_pin[] = "1234";
    char entered_pin[100];
    int choice;

    // Outer loop: Keeps the door lock system running indefinitely
    while (1) {
        int attempts_left = 3;
        int pin_is_correct = 0;

        // Inner loop: Gives 3 attempts
        while (attempts_left > 0) {
            printf("\nEnter a 4-digit numerical PIN: ");
            scanf("%s", entered_pin);

            int len = strlen(entered_pin);
            if (len < 4) {
                printf("PIN is too short (must be 4 digits)\n");
            } else if (len > 4) {
                printf("PIN is too long (must be 4 digits)\n");
            } else {
                printf("PIN is exactly 4 digits\n");
            }

            if (len == 4 && strcmp(entered_pin, correct_pin) == 0) {
                pin_is_correct = 1;
                break;
            } else {
                attempts_left--;
                printf("Incorrect PIN!\n");
                if (attempts_left > 0) {
                    printf("Remaining attempts: %d\n", attempts_left);
                }
            }
        }

        // If the PIN was entered correctly, show the menu
        if (pin_is_correct) {
            printf("\n=== Device Menu ===\n");
            printf("1. Open Door\n");
            printf("2. Change Username\n");
            printf("3. Change PIN\n");
            printf("4. Exit\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch (choice) {
                case 1:
                    printf("Access granted. Door unlocked\n");
                    break;
                case 2:
                    printf("Change username feature coming soon.\n");
                    break;
                case 3:
                    printf("Change PIN feature coming soon.\n");
                    break;
                case 4:
                    printf("Exiting system.\n");
                    return 0; // Exits the entire program completely
                default:
                    printf("Invalid option! Please try again.\n");
                    break;
            }
            break; // Break the outer loop after performing menu action
        } else {
            // Lockout countdown
            printf("\nSystem locked! Wait for 5 seconds...\n");
            for (int i = 5; i >= 1; i--) {
                printf("%d... ", i);
                fflush(stdout);
                SLEEP_1_SEC();
            }
            printf("\nYou can try again now.\n");
            // The outer loop repeats here, resetting attempts_left back to 3!
        }
    }

    return 0;
}
