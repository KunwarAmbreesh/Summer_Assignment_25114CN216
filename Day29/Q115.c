#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int ch;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n1.Length\n2.Display\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("Length = %d", strlen(str));
                break;

            case 2:
                printf("String = %s", str);
                break;

            case 3:
                printf("Exit");
                break;

            default:
                printf("Invalid Choice");
        }
    } while(ch != 3);

    return 0;
}