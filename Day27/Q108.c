#include <stdio.h>

int main() {
    int m1, m2, m3, total;
    float percentage;

    printf("Enter Marks of 3 Subjects: ");
    scanf("%d%d%d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    printf("\nMarksheet\n");
    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 40)
        printf("Result = Pass");
    else
        printf("Result = Fail");

    return 0;
}