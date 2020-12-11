#include <iostream>
using namespace std;

int main(){
    //original cent
    //dollor / cent => dollor and (dollor % cent) *100  -> leftover
    //same procedure until the leftover is 0 
    const int dollor = 100;
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;
    int original_cent {};
    int amount_change {};
    int left_over {};

    cout << "Please provide cents : "<< endl;
    cin >> original_cent;
    amount_change = original_cent/dollor;
    left_over = original_cent % dollor;
    cout << "dollars : " << amount_change <<endl;
    // cout << "This is amout change : "<<amount_change<< endl;
    // cout << "This is left_over : "<< left_over << endl;
    if(left_over != 0 ){
    amount_change = left_over/quarter;
    left_over = left_over % quarter;
    cout << "quarters : " << amount_change <<endl;
    }else{
    cout << "quarters : " << left_over <<endl;
    cout << "dime : " << left_over <<endl;
    cout << "nickel : " << left_over <<endl;
    cout << "penny : " << left_over <<endl;
    }
    if(left_over != 0){
    amount_change = left_over/dime;
    left_over = left_over % dime;
    cout << "dime : " << amount_change <<endl;
    }else
    {
    cout << "dime : " << left_over <<endl;
    cout << "nickel : " << left_over <<endl;
    cout << "penny : " << left_over <<endl;
    }
    
    if(left_over != 0){
    amount_change = left_over/nickel;
    left_over = left_over % nickel;
    cout << "nickel : " << amount_change <<endl;
    }else{
    cout << "nickel : " << left_over <<endl;
    cout << "penny : " << left_over <<endl;
    }
    if(left_over != 0){
    amount_change = left_over/penny;
    left_over = original_cent % penny;
    cout << "penny : " << amount_change <<endl;
    }else{
    cout << "penny : " << left_over <<endl;
    }
    return 0;
}

// int total_amount{100};
// int total_number{8};
// double average {0.0};

// average = total_amount / total_number;
// cout << average << endl;

// average = static_cast<double>(total_amount) / total_number;
// average = (double)total/count; Old-style
// cout << average << endl;