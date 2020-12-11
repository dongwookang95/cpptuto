#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector <int> collection_num {0,1,2,2,2,2,3,4,5,5};
    int temp{};
    char input{};
    bool done {false};
    int number_in {}; 
    char result {};
    float sum {};
    float avr {};
    int num_item {};

    while (!done){
        cout << "P - Print numbers " <<endl;
        cout << "A - Add a number" <<endl;
        cout << "M - Display mean of the numbers" <<endl;
        cout << "S - Display the smallest number" <<endl;
        cout << "L - Display the largest number" <<endl;
        cout << "Q - Quit" <<endl ;
        cout << "Please provide a menu selection : " <<endl;
        cin >> input;
        switch(input){
            case 'p':
            case 'P' :{ 
                for(int i : collection_num){
                    cout << "This is what you have in your array : "<< i << endl;
                }
                break;}
            case 'a' : 
            case 'A' :{
                cout << "Which number do you want to add on your array ? : "<< endl;
                cin >> number_in;
                collection_num.push_back(number_in);
                cout << "number : " <<number_in<<" has beed successfully added on array" << endl;
                break;}
            case 'm' :
            case 'M' :{
                for(int k:collection_num){
                    sum +=k;
                }
            num_item = collection_num.size();
            avr = sum/num_item;
            cout << "This is the mean of your list : "<< endl;
            cout << avr << endl;    
            break;}
            case 's' :
            case 'S' :{
                temp = collection_num[0];
                for(int i:collection_num){
                    if(temp>i){
                        temp=i;
                    }
                }
            cout <<"This is the minumum number in your array : "<< temp << endl;
            break;
            }
            case 'l' :
            case 'L' :{
                temp = collection_num[0];
                for(int i:collection_num){
                    if(temp<i){
                        temp=i;
                    }
                }
            cout <<"This is the maximum number in your array : "<< temp << endl;

            break;}
            case 'q':
            case 'Q':{
                cout << "Are you sure to quit(y/n) ? : ";
                cin >> result;
                if(result == 'y' || result == 'Y'){
                    done = true;
                }else{
                    cout << "Well, have fun then!";}
                break;}
            case 'default' :
                
                break;
                }
            }
    return 0;
}