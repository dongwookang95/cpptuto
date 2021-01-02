#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account frank_account;
    frank_account.set_name("frank's Account");
    frank_account.set_balance(1000.0);
    cout<<frank_account.get_balance();

    return 0;
}