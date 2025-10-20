#include <stdio.h>

int main() {
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char students[3][10] = {"Ali", "Bob", "Cat"};
    int i, j, total;
    float average;

    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        average = total / 3.0;

        if (average >= 80)
            printf("%s Grade A average=%.2f\n", students[i], average);
        else if (average >= 60)
            printf("%s Grade B average=%.2f\n", students[i], average);
        else if (average >= 40)
            printf("%s Grade C average=%.2f\n", students[i], average);
        else
            printf("%s Fail average=%.2f\n", students[i], average);
    }

    int highest = 0, topper = 0;
    for (i = 0; i < 3; i++) {
        total = 0;
        for (j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        if (total > highest) {
            highest = total;
            topper = i;
        }
    }

    printf("Topper: %s with total %d\n", students[topper], highest);
    return 0;
}
