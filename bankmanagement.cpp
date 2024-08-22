//
// Created by Hamza on 22/08/2024.
//


#include "bankmanagement.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Constructor to initialize account attributes
bankmanagement::bankmanagement()
{
    accno = 0;
    name = "";
    address = "";
    actype = '\0';
    amount = 0.0;
}

// Function to check if the account slot is available
bool bankmanagement::checkavailabilty()
{
    return (accno == 0 && name == "" && address == "" && actype == '\0' && amount == 0.0);
}

// Function to search for an account by account number
bool bankmanagement::searchaccount(int a)
{
    return (accno == a);
}

// Function to create a new account
void bankmanagement::newaccount()
{
    cout << " Enter your account no: ";
    cin >> accno; // Get account number
    cin.ignore(); // Ignore the newline character left in the input buffer

    cout << " Enter your full name: ";
    getline(cin, name); // Get account holder's name

    cout << " Enter your address: ";
    getline(cin, address); // Get account holder's address

    cout << " What type of account you want to open saving(s) or Current(c):";
    cin >> actype; // Get account type

    cout << " Enter How much money you want to deposit: ";
    cin >> amount; // Get initial deposit amount

    cout << " Account Created Successfully...";
}

// Function to deposit money into an account
void bankmanagement::deposit()
{
    float d;
    cout << "\n Enter amount to Deposit = ";
    cin >> d; // Get amount to deposit
    amount += d; // Update account balance
    cout << " Updated...New Amount = " << amount; // Notify user about updated balance
}

// Function to withdraw money from an account
void bankmanagement::withdraw()
{
    int wd;
    cout << "\n Enter amount to withdraw = ";
    cin >> wd; // Get amount to withdraw
    if (wd <= amount) // Check if withdrawal amount is less than or equal to account balance
    {
        amount -= wd; // Update account balance
        cout << "\n Amount is withdrawed."; // Notify user about successful withdrawal
    }
    else
    {
        cout << "\n You don't have enough amount in the bank."; // Notify user if insufficient balance
    }
    cout << "\n Remaining amount: " << amount; // Notify user about remaining balance
}

// Function to display account details
void bankmanagement::check_account()
{
    cout << "\n Your name: " << name; // Display account holder's name
    cout << "\n Your Account Number: " << accno;
    cout << "\n Your address: " << address; // Display account holder's address
    cout << "\n Account type: " << actype; // Display account type
    cout << "\n Amount= " << amount; // Display account balance
}

// Function to modify account information
void bankmanagement::modifyaccount()
{
    cout << "\n Account No. : " << accno; // Display account number
    cout << "\n Modify Account Holder Name : ";
    cin.ignore(); // Ignore the newline character left in the input buffer
    getline(cin, name); // Get modified account holder's name

    cout << "\n Modify your address: ";
    getline(cin, address); // Get modified account holder's address

    cout << "\n Modify Type of Account: saving (s) or Current (c): ";
    cin >> actype; // Get modified account type

    cout << "\n Account is modified."; // Notify user about successful modification
}

// Function to delete an account
void bankmanagement::deleteaccount()
{
    accno = 0; // Reset account number
    name = ""; // Reset account holder's name
    address = ""; // Reset account holder's address
    actype = '\0'; // Reset account type
    amount = 0.0; // Reset account balance
    cout << "\n Successfully deleted."; // Notify user about successful deletion
}
