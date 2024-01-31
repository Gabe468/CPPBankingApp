#include <string>
#include <iostream>
using namespace std;

class User{
    private:
        string firstName;
        string lastName;
    public:
        User(){
            cout << "Enter First Name:" << endl;
            cin >> firstName;
            cout << "Enter Last Name:" << endl;
            cin >> lastName;
        }
};