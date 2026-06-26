#include <stdio.h>

void display(int roll[], char name[][20]) {
    int i;
    printf("\nStudent List\n");
    for(i = 0; i < 2; i++) {
        printf("%d %s\n", roll[i], name[i]);
    }
}

int main() {
    int roll[2], i;
    char name[2][20];

    for(i = 0; i < 2; i++) {
        printf("Enter Roll and Name: ");
        scanf("%d %s", &roll[i], name[i]);
    }

    display(roll, name);

    return 0;
}