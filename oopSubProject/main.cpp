#include <iostream>
#include <string>

using namespace std;

class Player {
public:
//attributes
    string name;
    int health;
    int xp;

    void talk(string text_to_say){
        cout << name << " says" << text_to_say << endl;
    };
    bool is_dead();
};

class Account {
public:

//attributes
    string name;
    double balance;

    bool deposit(double bal){
        balance+=bal;cout<< "in deposit"<<endl;
    };
    bool withdraw(double bal){
        balance-=bal;cout<< "in withdraw"<<endl;

    };
};

int main(){
    Account Frank_account;
    Frank_account.name = "Franks Account";
    Frank_account.balance=10000;
    Frank_account.deposit(100000.0);
    Frank_account.withdraw(100.0);

    Player frank;
    frank.name = "Frank";
    frank.xp = 20;
    frank.talk("Hi there");

    Player *enemy = new Player;

    (*enemy).name = "Enemy";
    (*enemy).health = 22;
    enemy -> xp = 15;

    enemy->talk("i ll destroy you");
    return 0;
}