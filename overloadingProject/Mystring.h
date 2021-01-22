#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
private:
    char *str; // pointer to a  char[] that holds a C-style string
    
public:
    Mystring(); // No-arg constructor
    Mystring(const char *s); // Overloaded constructor
    Mystring(const Mystring &source); // Copy constructor
    ~Mystring();    // Destructor
    void display() const;


    // Mystring &operator=(Mystring &&rhs); 
    // Mystring operator-() const;  // make lowercase, unary doesn't take any arg
    // Mystring operator+(const Mystring &rhs) const;  // Concatenate, Binary takes 1 arg
    // bool operator==(const Mystring &rhs) const;
    // void display() const;
    int get_length() const;
    const char *get_str() const;

    bool operator==(const Mystring &rhs) const;
    bool operator!=(const Mystring &rhs)const;
    bool operator<(const Mystring &rhs)const;
    bool operator>(const Mystring &rhs)const;
    bool operator+=(const Mystring &rhs)const;
    Mystring operator*(int n)const;
    Mystring operator+(const Mystring &rhs)const;
    Mystring operator-() const;
};

#endif