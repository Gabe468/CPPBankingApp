#include <iostream>
#include "BankAccount.h"

int ans;

int main(){
    cout<< "WELCOME TO THE CPP BANKING APP" << endl;
    cout<< "1.CREATE ACCOUNT" << endl;
    cout<< "2.SIGN IN" << endl;
    
    cin >> ans;

    switch (ans){
        case 1:
            BankAccount account;
            cout << "WELCOME " + account.getUserName();
    }
}