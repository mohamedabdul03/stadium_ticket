#include <stdio.h>

int main() {
    int subjects, i;
    float credit, totalCredits = 0;
    float gradePoint, totalPoints = 0;
    char grade;

    printf("Gali tirada maadooyinka: ");
    scanf("%d", &subjects);

    for(i = 1; i <= subjects; i++) {
        printf("\nMaadada %d", i);

        printf("\nGali grade (A, B, C, D, F): ");
        scanf(" %c", &grade);

        printf("Gali credit hours: ");
        scanf("%f", &credit);

        if(grade == 'A' || grade == 'a')
            gradePoint = 4.0;
        else if(grade == 'B' || grade == 'b')
            gradePoint = 3.0;
        else if(grade == 'C' || grade == 'c')
            gradePoint = 2.0;
        else if(grade == 'D' || grade == 'd')
            gradePoint = 1.0;
        else
            gradePoint = 0.0;

        totalPoints += gradePoint * credit;
        totalCredits += credit;
    }

    float gpa = totalPoints / totalCredits;

    printf("\n----------------------");
    printf("\nGPA-gaagu waa: %.2f", gpa);
    printf("\n----------------------");

    return 0;
}
