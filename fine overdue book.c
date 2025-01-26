#include <iostream>
#include <cmath>
using namespace std;

int main() {

    string bookID;
    int dueDate, returnDate;

    cout << "Enter Book ID: ";
    cin >> bookID;
    cout << "Enter Due Date (in days, e.g., 5 for 5th day): ";
    cin >> dueDate;
    cout << "Enter Return Date (in days, e.g., 15 for 15th day): ";
    cin >> returnDate;

    if (returnDate < dueDate) {
        cout << "Error: Return date cannot be before the due date." << endl;
        return 1;
    }

    int daysOverdue = returnDate - dueDate;
    int fine = 0;

    if (daysOverdue > 0) {
        if (daysOverdue <= 7) {
            fine = daysOverdue * 20;
        } else if (daysOverdue <= 14) {
            fine = daysOverdue * 50;
        } else {
            fine = daysOverdue * 100;
        }
    } else {
        daysOverdue = 0;
        fine = 0;
    }

    cout << "\n--- Library Fine Details ---\n";
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine: Ksh. " << fine << endl;

    return 0;
}
