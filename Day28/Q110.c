#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    while (1) {
        printf("\n1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            balance += amount;
        }
        else if (choice == 2) {
            printf("Enter amount: ");
            scanf("%f", &amount);
            if (amount <= balance)
                balance -= amount;
            else
                printf("Insufficient balance!\n");
        }
        else if (choice == 3) {
            printf("Balance = %.2f\n", balance);
        }
        else {
            break;
        }
    }
    return 0;
}