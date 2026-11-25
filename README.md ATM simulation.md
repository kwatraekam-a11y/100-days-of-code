# ATM Simulation - C Programming Mini Hackathon

## Problem Statement
Implement a basic ATM simulation for a single demonstration account.

## Objective
Create a simple menu-driven C program that performs essential ATM operations while validating user input.

## Features
- Check current balance
- Deposit money
- Withdraw money
- Reject zero or negative transaction amounts
- Prevent withdrawals greater than the available balance
- Display updated balance after transactions
- Exit the program through the menu

## Algorithm
1. Start the program and initialize balance to Rs. 5000.
2. Display the ATM menu.
3. Read the user's choice.
4. If Check Balance is selected, display the current balance.
5. If Deposit is selected, read and validate the amount, then add it to balance.
6. If Withdraw is selected, validate the amount and available balance, then subtract it.
7. If Exit is selected, terminate the program.
8. Otherwise display an invalid-choice message.
9. Repeat until Exit is selected.

## C Concepts Used
- Variables and data types
- Functions
- if / else-if / else
- switch-case
- do-while loop
- Input/output using scanf and printf

## Compile and Run
```bash
gcc atm_simulation.c -o atm_simulation
./atm_simulation
```

## Sample Test Cases
| Test | Input | Expected Result |
|---|---|---|
| Check balance | Choice 1 | Rs. 5000.00 |
| Valid deposit | Deposit Rs. 2000 | Balance becomes Rs. 7000.00 |
| Valid withdrawal | Withdraw Rs. 1500 after deposit | Balance becomes Rs. 5500.00 |
| Excess withdrawal | Withdraw Rs. 10000 | Insufficient balance |
| Invalid amount | Deposit Rs. -100 | Invalid amount |
| Exit | Choice 4 | Program terminates |

## Team Details
Team Number: __________  
Batch: __________  
Team Members: __________, __________, __________
