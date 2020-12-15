#include <iostream>
using namespace std;
#include <vector>

void get_element(const vector<int>);
vector<int> add_element(vector <int> input);
void avr_element(const vector<int>);
void min_element(const vector<int>);
void max_element(const vector<int>);
void quit_program(bool);

int main() {
    vector <int> collection_num {0,1,2,2,2,2,3,4,5,5};
    char input{};
    bool done {false};


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
                get_element(collection_num);
                break;
            }
                
            case 'a' : 
            case 'A' :{
                add_element(collection_num);
                break;
                }
            case 'm' :
            case 'M' :{
                avr_element(collection_num);
                break;
            break;}
            case 's' :
            case 'S' :{
                min_element(collection_num);
                break;
            break;
            }
            case 'l' :
            case 'L' :{
                max_element(collection_num);
                break;
            break;}
            case 'q':
            case 'Q':{
                quit_program(done);
            }
            case 'default' :
                break;
                }
            }
    return 0;
}



// Function returning all elements in array
void get_element(const vector <int> input){
        for(int i:input){
            cout << "This is what you have in your array : " << i << " ";
    }
}

vector<int> add_element(vector <int> input){
    int number_in {0};
    cout << "Which number do you want to add on your array ? : "<< endl;
    cin >> number_in;
    input.push_back(number_in);
    cout << "number : " <<number_in<<" has beed successfully added on array" << endl;
    return input;
                // collection_num.push_back(number_in);
                // cout << "number : " <<number_in<<" has beed successfully added on array" << endl;
                // break;}
};
void avr_element(const vector<int> input){
    int sum {};
    int num_item {};
    double avr {};
    for(int k:input){
            sum +=k;
        }
    num_item = input.size();
    avr = sum/num_item;
    cout << "This is the mean of your list : "<< endl;
    cout << avr << endl;    
}

void min_element(const vector<int> input){
    int temp{};
    temp = input[0];
    for(int i:input){
        if(temp>i){
            temp=i;
        }
    }
}
void max_element(const vector<int> input){
    int temp{};
    temp = input[0];
    for(int i:input){
        if(temp>i){
            temp=i;
        }
    }
}
void quit_program(bool input){
    char result{};
    // quit the program
    cout << "Are you sure to quit(y/n) ? : ";
    cin >> result;
    if(result == 'y' || result == 'Y'){
        input = true;
    }else{
        cout << "Well, have fun then!";
    }
}

