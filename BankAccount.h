#include <string>
#include <iostream>
#include <ctime>
#include <chrono>
using namespace std;

class BankAccount{
    private:
        int balance;
        string userName;
        string passWord;
        time_t createdDate;
    public:
        BankAccount(){
            cout << "Enter User Name:" << endl;
            cin >> userName;
            cout << "Enter Password:" << endl;
            cin >> passWord;
            createdDate = chrono::system_clock::to_time_t(chrono::system_clock::now());
        };
    
    
    void display(){
        cout <<userName << endl << passWord << endl << ctime(&createdDate);
    }
};

