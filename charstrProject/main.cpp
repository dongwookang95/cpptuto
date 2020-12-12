#include <iostream>
#include <cstring>
#include <cctype> 
#include <vector> 
#include <string>

using namespace std;\

int main(){
    
    string alphabet {"abcdefghijklmnopqrstuvwxyz"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASR"};

    string input_string {};
    int temp_position {0};
    string encrypt_string {};
    vector <int> temp_position_array {}; 
    cout << "Please enter your message"<<endl;
    getline(cin,input_string); 
    for(size_t i{0}; i<input_string.size();++i){
        // if(input_string[i] != string::npos){
        temp_position = alphabet.find(input_string[i]);
        temp_position_array.push_back(temp_position);
        encrypt_string +=key[temp_position_array[i]];                    
        // }
    }
    cout << encrypt_string<< endl;            
return 0;

}