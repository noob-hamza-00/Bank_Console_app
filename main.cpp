
// Mohammad Hamza Ijaz

#include "bankmanagement.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

int main()
{
    bankmanagement b[5]; // Array of bankmanagement objects to store bank accounts

    int x, an; // Variables for user input and account number
    bool check; // Boolean variable for checking account existence

    while (1)
    {
        system("CLS"); // Clear the screen
        cout << "             =================              " << endl;
        cout << "             |   Bank Menu   |              " << endl;
        cout << "==========================================" << endl;
        cout << " Enter 1 to create an new account.\n Enter 2 to Deposit.\n Enter 3 to Withdraw.\n Enter 4 to Check account.\n Enter 5 to Modify.\n Enter 6 to Delete.\n Enter 7 to show all accounts.\n Enter 8 to exit";
        cout << "\n==========================================" << endl;
        cout << " Enter choice no: ";
        cin >> x; // Get user's choice

        // Switch statement to perform operations based on user input
        switch (x)
        {
            case 1: // Create a new account
            {
                check = false;
                for (int i = 0; i < 5; i++)
                {
                    if (b[i].checkavailabilty()) // Check if the account slot is available
                    {
                        check = true;
                        b[i].newaccount(); // Call function to create a new account
                        cout << " Working.";
                        break;
                    }
                }

                if (check == false)
                    cout << " Accounts exceeded."; // Notify if maximum accounts limit is reached

                break;
            }
            case 2: // Deposit money into an account
            {
                check = false;
                cout << " Enter account no. : ";
                cin >> an; // Get account number from user
                for (int i = 0; i < 5; i++)
                {
                    if (b[i].searchaccount(an)) // Search for the account
                    {
                        check = true;
                        b[i].deposit(); // Call function to deposit money
                        break;
                    }
                }

                if (check == false)
                    cout << " No account found."; // Notify if account not found

                break;
            }
            case 3: // Withdraw money from an account
            {
                check = false;
                cout << " Enter account no. : ";
                cin >> an; // Get account number from user
                for (int i = 0; i < 5; i++)
                {
                    if (b[i].searchaccount(an)) // Search for the account
                    {
                        check = true;
                        b[i].withdraw(); // Call function to withdraw money
                        break;
                    }
                }

                if (check == false)
                    cout << " No account found."; // Notify if account not found

                break;
            }
            case 4: // Check account details
            {
                check = false;
                cout << " Enter account no. : ";
                cin >> an; // Get account number from user
                for (int i = 0; i < 5; i++)
                {
                    if (b[i].searchaccount(an)) // Search for the account
                    {
                        check = true;
                        b[i].check_account(); // Call function to display account details
                        break;
                    }
                }

                if (check == false)
                    cout << " No account found."; // Notify if account not found

                break;

            }
            case 5: // Modify account information
            {
                check = false;
                cout << " Enter account no. : ";
                cin >> an; // Get account number from user
                for (int i = 0; i < 5; i++)
                {
                    if (b[i].searchaccount(an)) // Search for the account
                    {
                        check = true;
                        b[i].modifyaccount(); // Call function to modify account information
                        break;
                    }
                }

                if (check == false)
                    cout << " No account found."; // Notify if account not found

                break;
            }
            case 6: // Delete an account
            {
                check = false;
                cout << " Enter account no. : ";
                cin >> an; // Get account number from user
                for (int i = 0; i < 5; i++)
                {
                    if (b[i].searchaccount(an)) // Search for the account
                    {
                        check = true;
                        b[i].deleteaccount(); // Call function to delete the account
                        break;
                    }
                }

                if (check == false)
                    cout << " No account found."; // Notify if account not found

                break;
            }
            case 7: // Show all accounts
            {
                check = false;
                for (int i = 0; i < 5; i++)
                {
                    if (!b[i].checkavailabilty()) // Check if the account is not empty
                    {
                        check = true;
                        cout << "\nAccount details of " << i + 1 << ":\n ";
                        b[i].check_account(); // Call function to display account details
                        cout << "\n==========================================\n";
                    }
                }

                if (check == false)
                    cout << " No account found."; // Notify if no accounts are found

                break;
            }
            case 8: // Exit the program
            {
                exit(0); // Terminate the program
            }
        }
        getch(); // Pause the screen
    }

    return 0;
}
