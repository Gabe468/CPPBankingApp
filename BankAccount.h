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
        string firstName;
        string lastName;

    public:
        BankAccount(){
            string cPassWord;

            cout << "Enter User Name:" << endl;
            cin >> userName;

            int i = 0;
            while(i < 1){
                cout << "Enter Password:" << endl;
                cin >> passWord;
                cout << "Confirm Password:" << endl;
                cin >> cPassWord;
                if (cPassWord != passWord){
                    cout << "INCORRECT PASSWORD" << endl;
                }else{
                  i++;  
                }
            }
            createdDate = chrono::system_clock::to_time_t(chrono::system_clock::now());
        };
    
    
    void display(){
        cout <<userName << endl << passWord << endl << ctime(&createdDate);
    }
};

