#include <stdio.h>
#include <string.h>

int main() {
    char str[256];
    size_t length;
    // size_t: Cannot be negative & it's C's dedicated data type for representing sizes of objects and memory in bytes.

    printf("Enter any text or sentence: ");

    if (scanf(" %255[^\n]", str) == 1) // Reads up to 255 characters, including spaces, until Enter (\n)
    {   // Scanset [^\n]: Reads all characters including spaces until the Enter key (newline) is pressed.

        length = strlen(str);

        printf("\nYou entered: \"%s\"\n", str);
        // \"%s\": Escapes quotes with \" so literal quotation marks are displayed around the printed string.
        printf("Length of the string: %zu character(s)\n", length);
        // %zu is the data type for size_t
    } else {
        printf("Error: Could not read input.\n");
        return 1;
    }

    return 0;
}
