#include <iostream>

using namespace std;

int main() {
    int numC;
     cout << "Enter the number of customers: ";
     cin >> numC;

    if (numC > 10) {
        cout << "Sorry, you can only enter up to 10 customers."<<endl;
        return 0;
    }

    string name[numC];
    string NID[numC];
    int age[numC];
    string occupation[numC];
    double balance[numC];

    double monthlyInterestRate = 0.065;
    int monthsInYear = 12;
    int years = 10;

    for (int i = 0; i < numC; i++) {
        cout << "\nEnter details for customer " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> name[i];
        cout << "NID: ";
        cin >> NID[i];
        cout << "Age: ";
        cin >> age[i];
        cout << "Occupation: ";
        cin >> occupation[i];
        cout << "Account Balance (in taka): ";
        cin >> balance[i];
    }

     cout << "\nCustomer details with balances after 10 years:"<<endl;
     cout << "Name\t\tAnnual Balance\t\tBalance after 10 years"<<endl;

    for (int i = 0; i < numC; i++) {
        double annualBalance = balance[i] * (1 + monthlyInterestRate * monthsInYear);
        double balanceAfter10Years = balance[i];

        for (int j = 0; j < years; j++) {
            balanceAfter10Years += balanceAfter10Years * monthlyInterestRate * monthsInYear;
        }

        cout << name[i] << "\t\t" << annualBalance << "\t\t" << balanceAfter10Years << endl;
    }

    return 0;
}
