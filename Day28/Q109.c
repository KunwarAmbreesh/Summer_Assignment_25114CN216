#include <stdio.h>

int main() {
    int choice;
    char book[50];

    while (1) {
        printf("\n1. Add Book\n2. Search Book\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter book name: ");
            scanf("%s", book);
            printf("Book added successfully!\n");
        }
        else if (choice == 2) {
            printf("Enter book name to search: ");
            scanf("%s", book);
            printf("Book found: %s\n", book);
        }
        else {
            break;
        }
    }
    return 0;
}