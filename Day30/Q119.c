#include <stdio.h>

int main() {
    int id[2], i;
    char name[2][20];

    for(i = 0; i < 2; i++) {
        printf("Enter Employee ID and Name: ");
        scanf("%d %s", &id[i], name[i]);
    }

    printf("\nEmployee Details\n");
    for(i = 0; i < 2; i++) {
        printf("%d %s\n", id[i], name[i]);
    }

    return 0;
}