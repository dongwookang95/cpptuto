#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    unique_ptr<Account> mike_account;
    unique_ptr<Account> bruno_account;

    try{
        bruno_account = make_unique<Savings_Account>("Bruno",-2000);
        cout<<*bruno_account<< endl;
    }
    catch(const IllegalBalanceException &ex){
        cerr<<ex.what()<<endl;
    }
    
    try{
        mike_account = make_unique<Savings_Account>("Mike",2000);
        cout<<*bruno_account<< endl;
        mike_account->withdraw(1000.0);
        cout<<*bruno_account<< endl;
        mike_account->withdraw(1200.0);
        cout<<*bruno_account<< endl;
    }
    catch(const IllegalBalanceException &ex){
        cout<<ex.what()<<endl;
    }
    catch(const InsufficientFundsException &ex){
        cout<<ex.what()<<endl;
    }

    cout << "Program completed successfully" << endl;
    return 0;
}

