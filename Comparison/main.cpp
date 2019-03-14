#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
using namespace std;


int main(int argc, char** argv) {
    string accountType;
    double balance = 0.0;
    double deposit = 0.0;
    double withdrawal = 0.0;
    string yesOrNo;
    int i;
    cout << "Is this a checking or a savings account?" << endl;
    cin >> accountType;
    
    if (accountType != "savings" && accountType != "Savings" && accountType != "checking" && accountType != "Checking") {
        cout << "Invalid account type";
        return 1;
               
    }
    
    cout << "What was your last known balance?" << endl;
    cin >> balance;
    
    cout << "Do you have any new deposits? (type lower case only please)" << endl;
    cin >> yesOrNo;

    while (yesOrNo == "yes") {
        cout << "Please enter the amount of your last deposit" << endl;
        cin >> deposit;
        balance = balance + deposit;
        cout << "Your new balance is: $" << balance << endl;
        cout << "Do you have any more deposits?";
        cin >> yesOrNo;
    }
    
    cout << "Do you have any withdrawals to report?" << endl;
    cin >> yesOrNo;
    
    while (yesOrNo == "yes") {
        cout << "Please enter the amount of your withdrawal." << endl;
        cin >> withdrawal;
        balance = balance - withdrawal;
        cout << "Your new balance is: $" << balance << endl;
        cout << "Do you have any more withdrawals?" << endl;
        cin >> yesOrNo;
    }
    
    cout << "Your current " << accountType << " balance is: $" << fixed << setprecision(2) << balance;
    

          
return 0;
}
