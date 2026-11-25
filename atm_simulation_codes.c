#include <stdio.h>

void checkBalance(float balance) {
    printf("\nYour current balance is: Rs. %.2f\n", balance);
}

float depositMoney(float balance) {
    float amount;
    printf("\nEnter amount to deposit: Rs. ");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Invalid amount! Deposit amount must be greater than 0.\n");
    } else {
        balance += amount;
        printf("Deposit successful!\nUpdated balance: Rs. %.2f\n", balance);
    }
    return balance;
}

float withdrawMoney(float balance) {
    float amount;
    printf("\nEnter amount to withdraw: Rs. ");
    scanf("%f", &amount);
    if (amount <= 0) {
        printf("Invalid amount! Withdrawal amount must be greater than 0.\n");
    } else if (amount > balance) {
        printf("Insufficient balance!\nAvailable balance: Rs. %.2f\n", balance);
    } else {
        balance -= amount;
        printf("Withdrawal successful!\nUpdated balance: Rs. %.2f\n", balance);
    }
    return balance;
}

int main() {
    int choice;
    float balance = 5000.00;
    do {
        printf("\n==================================\n");
        printf("          ATM SIMULATION\n");
        printf("==================================\n");
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("==================================\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: checkBalance(balance); break;
            case 2: balance = depositMoney(balance); break;
            case 3: balance = withdrawMoney(balance); break;
            case 4: printf("\nThank you for using the ATM.\nHave a nice day!\n"); break;
            default: printf("\nInvalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);
    return 0;
}
