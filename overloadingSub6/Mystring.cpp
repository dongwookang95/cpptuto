
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

// Destructor
Mystring::~Mystring() {
    delete [] str;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

// length getter
 int Mystring::get_length() const { return std::strlen(str); }
 
Mystring &Mystring::operator=(const Mystring &rhs){
    std::cout<<"Copy assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this -> str;
    str = new char[std::strlen(rhs.str)+1];
    std::strcpy(this -> str, rhs.str);
    return *this;
}

//Move assignment
Mystring &Mystring::operator=(Mystring &&rhs){
    std::cout << "Using move assignment" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] str;
    str = rhs.str;
    rhs.str=nullptr;
    return *this;
}
// Equality
bool operator==(const Mystring &lhs,const Mystring &rhs)  {
    return (std::strcmp(lhs.str, rhs.str) == 0);
}

// Make lowercase
Mystring operator-(const Mystring &obj)  {
    char *buff= new char[std::strlen(obj.str) + 1];
    std::strcpy(buff, obj.str);
    for (size_t i=0; i<std::strlen(buff); i++)
        buff[i] = std::tolower(buff[i]);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// Concatentate
Mystring operator+(const Mystring &lhs,const Mystring &rhs) {
    char *buff = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

//overloaded instertion oper
std::ostream &operator<<(std::ostream &os, const Mystring &rhs){
    os << rhs.str;
    return os;
};
//overloaded extraction oper
std::istream &operator>>(std::istream &in, Mystring &rhs){
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring(buff);
    delete [] buff;
    return in;
};

  // string getter
 const char *Mystring::get_str() const { return str; }
