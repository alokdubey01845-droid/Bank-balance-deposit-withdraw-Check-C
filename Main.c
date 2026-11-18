#include <stdio.h>

int main() {
    int choice;
    float balance = 5000.0, amount;

    printf("--- Mini ATM Machine ---\n");
    while (1) {
        printf("\n1. Balance Check  2. Deposit  3. Withdraw  4. Exit\nChoice enter karein: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Aapka current balance hai: Rs. %.2f\n", balance);
        } else if (choice == 2) {
            printf("Deposit amount enter karein: ");
            scanf("%f", &amount);
            balance += amount;
            printf("Deposit successful! Naya balance: Rs. %.2f\n", balance);
        } else if (choice == 3) {
            printf("Withdraw amount enter karein: ");
            scanf("%f", &amount);
            if (amount <= balance) {
                balance -= amount;
                printf("Withdraw successful! Bacha hua balance: Rs. %.2f\n", balance);
            } else {
                printf("Insufficient balance!\n");
            }
        } else if (choice == 4) {
            printf("Thank you! ATM band ho raha hai.\n");
            break;
        } else {
            printf("Galat choice! Dobara try karein.\n");
        }
    }
    return 0;
}
