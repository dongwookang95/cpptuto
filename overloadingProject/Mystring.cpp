#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring() :
str{nullptr} {
        str = new char[1];
        *str='\0';
}

//Overloaded Constructor
Mystring::Mystring(const char *s) :
str{nullptr}{
     if(s==nullptr){
         str=new char[1];
         *str='\0';
     } else {
         str = new char[std::strlen(s)+1];
         std::strcpy(str,s);
     }
}

Mystring::Mystring(const Mystring &source) :
str{nullptr} {
    str = new char[std::strlen(source.str )+ 1];
    std::strcpy(str, source.str);
}
//lower case
Mystring Mystring::&operator-(){
    char *buff= new char[std::strlen(str)+1];
    std::strcpy(buff,str);
    for (size_t i=0;i<std::strlen(buff);i++){
        buff[i]=std::tolower(buff[i]);
        Mystring temp {buff};
        delete [] buff;
        return temp;
    }
}
bool Mystring::&operator==(const Mystring &rhs){
    return (std::strcmp(this.str,rhs.str) == 0);
}
bool Mystring::&operator!=(const Mystring &rhs){
    return (std::strcmp(this.str,rhs.str) != 0);
};
bool Mystring::&operator<(const Mystring &rhs){
    return ((std::strlen(this.str)<std::strlen(rhs.str))==0);
};

bool Mystring::&operator>(const Mystring &rhs){
    return ((std::strlen(this.str)>std::strlen(rhs.str))==0);
}
Mystring Mystring::&operator+(const Mystring &rhs){
    char *buff = new char[std::strlen(this.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

bool Mystring::&operator+=(const Mystring &rhs){
    char *buff = new char[std::strlen(this.str)+std::strlen(rhs.str)+1];
    std::strcpy(buff, str);
    std::strcat(buff, rhs.str);
    return (std::strcmp(buff.str,rhs.str) == 0);
}
Mystring Mystring::&operator*(const Mystring &rhs, int n);
    char *buff = new char[std::strlen(this.str)*3];
    for(size_t i=0; i<n; i++){
        std::strcat(buff, rhs.str);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
// Destructor
Mystring::~Mystring() {
    delete [] str;
}
