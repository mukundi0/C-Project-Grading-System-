#include <stdio.h>
#include <stdlib.h>

double mean(int, int, int, int, int);
const char* grade(double);

int main() {
    int num_students;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    for (int i = 1; i <= num_students; i++) {
        int math, eng, swa, releduandsocstd, science;

        printf("Enter marks for student %d\n", i);

        do {
            printf("Enter your Math marks (0-100): ");
            scanf("%d", &math);
            if (math > 100 || math < 0) {
                printf("Invalid mark for Math. Please try again.\n");
            }
        } while (math > 100 || math < 0);

        do {
            printf("Enter your English marks (0-100): ");
            scanf("%d", &eng);
            if (eng > 100 || eng < 0) {
                printf("Invalid mark for English. Please try again.\n");
            }
        } while (eng > 100 || eng < 0);

        do {
            printf("Enter your Kiswahili marks (0-100): ");
            scanf("%d", &swa);
            if (swa > 100 || swa < 0) {
                printf("Invalid mark for Kiswahili. Please try again.\n");
            }
        } while (swa > 100 || swa < 0);

        do {
            printf("Enter your Social Studies and Religious Education marks (0-100): ");
            scanf("%d", &releduandsocstd);
            if (releduandsocstd > 100 || releduandsocstd < 0) {
                printf("Invalid mark for Social Studies and Religious Education. Please try again.\n");
            }
        } while (releduandsocstd > 100 || releduandsocstd < 0);

        do {
            printf("Enter your Science marks (0-100): ");
            scanf("%d", &science);
            if (science > 100 || science < 0) {
                printf("Invalid mark for Science. Please try again.\n");
            }
        } while (science > 100 || science < 0);

        double result = mean(math, eng, swa, releduandsocstd, science);
        const char* Mean = grade(result);

        printf("Student %d\n", i);
        printf("Your mean is %.2lf\n", result);
        printf("Your grade is %s\n\n", Mean);
    }

    return 0;
}

double mean(int math, int eng, int swa, int releduandsocstd, int science) {
    return ((math + eng + swa + releduandsocstd + science) / 5.0);
}

const char* grade(double mean) {
    if (mean >= 79 && mean <= 100)
        return "A";
    else if (mean >= 75 && mean < 79)
        return "A-";
    else if (mean >= 70 && mean < 74)
        return "B+";
    else if (mean >= 65 && mean < 69)
        return "B";
    else if (mean >= 60 && mean < 64)
        return "B-";
    else if (mean >= 55 && mean < 59)
        return "C+";
    else if (mean >= 45 && mean < 54)
        return "C";
    else if (mean >= 40 && mean < 44)
        return "C-";
    else if (mean >= 35 && mean < 39)
        return "D+";
    else if (mean >= 30 && mean < 34)
        return "D";
    else if (mean >= 25 && mean < 29)
        return "D-";
    else
        return "E";
}
