#include <stdio.h>

int main() {
    char book[3][20];
    int i;

    for(i = 0; i < 2; i++) {
        printf("Enter Book Name: ");
        scanf("%s", book[i]);
    }

    printf("\nBooks in Library:\n");
    for(i = 0; i < 2; i++) {
        printf("%s\n", book[i]);
    }

    return 0;
}