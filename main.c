/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    char name[50], section[20];
    float grade1, grade2, grade3, grade4, average;
    char remarks[30];

    printf("Enter Complete Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Section: ");
    scanf(" %[^\n]", section);

    printf("\nEnter 1st Quarter Grade: ");
    scanf("%f", &grade1);

    printf("Enter 2nd Quarter Grade: ");
    scanf("%f", &grade2);

    printf("Enter 3rd Quarter Grade: ");
    scanf("%f", &grade3);

    printf("Enter 4th Quarter Grade: ");
    scanf("%f", &grade4);

    average = (grade1 + grade2 + grade3 + grade4) / 4;

    if (average >= 90) {
        sprintf(remarks, "Outstanding");
    }
    else if (average >= 85) {
        sprintf(remarks, "Very Satisfactory");
    }
    else if (average >= 80) {
        sprintf(remarks, "Satisfactory");
    }
    else if (average >= 75) {
        sprintf(remarks, "Fair");
    }
    else {
        sprintf(remarks, "Failed");
    }

    printf("\nStudent: %s", name);
    printf("\nSection: %s", section);
    printf("\nGeneral Average: %.2f", average);
    printf("\nRemarks: %s", remarks);

    return 0;
}