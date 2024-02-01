#include <iostream>
#include "BankAccount.h"

int ans;

int main(){
    cout<< "WELCOME TO THE CPP BANKING APP" << endl;
    cout<< "1.CREATE ACCOUNT" << endl;
    cout<< "2.SIGN IN" << endl;
    
    cin >> ans;

    if (ans == 1){
        BankAccount account;
        account.display();
    }
}