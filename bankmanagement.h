//
// Created by Hamza on 22/08/2024.
//
#ifndef BANKMANAGEMENT_H
#define BANKMANAGEMENT_H

#include <string>
using namespace std;

struct bankmanagement
{
    int accno; // Account number
    string name, address; // Account holder's name and address
    char actype; // Account type (saving or current)
    float amount; // Account balance

    // Function declarations for various operations on bank accounts
    bool checkavailabilty(); // Check if the account slot is available
    bool searchaccount(int); // Search for an account by account number
    void newaccount(); // Create a new bank account
    void deposit(); // Deposit money into an account
    void withdraw(); // Withdraw money from an account
    void check_account(); // Display account details
    void modifyaccount(); // Modify account information
    void deleteaccount(); // Delete an account

    // Constructor to initialize account attributes
    bankmanagement();
};

#endif // BANKMANAGEMENT_H
