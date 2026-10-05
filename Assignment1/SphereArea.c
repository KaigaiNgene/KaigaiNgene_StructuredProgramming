#include <stdio.h>
#include <stdlib.h>


int main() {
    double radius, surface_area;
    const int PI=3.14159;

    printf("Enter the radius of the sphere: ");
    if (scanf("%lf", &radius) != 1) // !=1 Checks whether the 1st required value was read successfully
        {
        printf("Error: Invalid numerical input.\n");
        return 1;
        //without return 1; the program keeps running!
    }

    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return 1;
    }

    surface_area = 4.0 * PI * radius * radius;

    printf("Radius: %lf\n", radius);
    printf("Surface Area: %lf\n", surface_area);

    return 0;
}
