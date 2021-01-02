#include <string>
#include <iostream>
using namespace std;

class Player
{
    private:
    std::string name;
    int health;
    int xp;

    public:
    std::string get_name(){
        return name;
    }
    int get_health(){
        return health;
    }
    int get_xp(){
        return xp;
    }
    Player(std::string name_val="None",int health_val = 0, int xp_val =0);
    //Copy constructor
    Player(const Player &source);
    // Desturctor
    ~Player(){
        cout<<"Destructor called for: "<<name <<endl;
    };
};

Player::Player(std::string name_val, int health_val, int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
        cout << "Three-args constructor for" + name << endl;
    //copy constructor

    }

Player::Player(const Player &source)
    : name(source.name), health(source.health), xp(source.xp){
        cout << "copy constructor - made copy of :"<<source.name<<endl; 
    }
void display_player(Player p){
    cout<<"Name:" << p.get_name() <<endl;
    cout<<"Health:" << p.get_health() <<endl;
    cout<<"xp:" << p.get_xp() <<endl;
}
 
int main(){
    Player empty;
    Player frank {"Frank"};
    Player hero {"Hero",100};
    Player vilanin {"Vilain",100,55};
    return 0;
}