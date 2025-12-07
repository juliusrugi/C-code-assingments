#include <stdio.h>


void showMenu();
void balanceEnquiry(float balance);
float deposit(float balance);
float withdraw(float balance);

int main() {
    int pin, attempts = 0;
    const int correctPin = 1234;
    float balance = 1000.0;
    int choice;


    while (attempts < 3) {
        printf("Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == correctPin) {
            printf("Login successful!\n");
            break;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts left: %d\n", 3 - attempts);
        }
    }

    if (attempts == 3) {
        printf("ACCESS DENIED. Too many attempts.\n");
        return 0;
    }


    while (1) {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                balanceEnquiry(balance);
                break;

            case 2:
                balance = deposit(balance);
                break;

            case 3:
                balance = withdraw(balance);
                break;

            case 4:
                printf("Exiting system...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }

        printf("\n");
    }

    return 0;
}



void showMenu() {
    printf("----- MENU -----\n");
    printf("1. Balance Enquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

void balanceEnquiry(float balance) {
    printf("Your current balance is: %.2f\n", balance);
}

float deposit(float balance) {
    float amount;

    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount! Deposit must be positive.\n");
        return balance;
    }

    balance += amount;
    printf("Deposit successful! New balance: %.2f\n", balance);

    return balance;
}

float withdraw(float balance) {
    float amount;

    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount! Withdrawal must be positive.\n");
        return balance;
    }

    if (amount > balance) {
        printf("Insufficient funds!\n");
        return balance;
    }

    balance -= amount;
    printf("Withdrawal successful! New balance: %.2f\n", balance);

    return balance;
}
