#include <stdio.h> 
int main() {

    int boys = 0, girls = 0;
    char gender;

    printf("Enter genders for 50 people:\n");
    for (int i = 1; i <= 50; i++) {
        printf("Enter gender for person %d (M/F): ", i);
        scanf(" %c", &gender);

        if (gender == 'M' || gender == 'm') {
            boys++;
        } else if (gender == 'F' || gender == 'f') {
            girls++;
        }
    }

    printf("Number of boys: %d\n", boys);
    printf("Number of girls: %d\n", girls);

    return 0;
}