#include <stdio.h>

float calculateAverage(int marks[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return sum / (float)size;
}

char calculateGrade(float average) {
    if (average >= 80)
        return 'A';
    else if (average >= 60)
        return 'B';
    else if (average >= 40)
        return 'C';
    else
        return 'F';
}

int main() {
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}
    };
    char students[3][10] = {"Ali", "Bob", "Cat"};
    int i, j, total, topper = 0;
    int highest = 0;

    for (i = 0; i < 3; i++) {
        float average = calculateAverage(marks[i], 3);
        char grade = calculateGrade(average);
        printf("%s Grade %c average=%.2f\n", students[i], grade, average);

        total = 0;
        for (j = 0; j < 3; j++)
            total += marks[i][j];
        if (total > highest) {
            highest = total;
            topper = i;
        }
    }

    printf("Topper: %s with total %d\n", students[topper], highest);
    return 0;
}
