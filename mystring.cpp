#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <iomanip>
using namespace std;

class mystring
{
private:
    int capacity;
    char *str;
public:
    void read()
    {
        cin >> str;
    }
    void print()
    {
        cout << str;
    }
    mystring();
    ~mystring();
    mystring(int i);
    mystring(const mystring &);
    mystring operator=(const mystring&);
    bool operator ==(const mystring &);
};
bool mystring::operator==(const mystring &s)
{
    if (strcmp(str,s.str)==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
mystring mystring::operator=(const mystring &s)
{
    capacity = s.capacity;
    delete[] str;
    str = new char[capacity];
    strcpy(str,s.str);
    return *this;
}
mystring::~mystring(/* args */)
{
    delete[] str;
}

mystring::mystring()
{
    capacity = 20;
    str = new char[capacity];
}

mystring::mystring(int n)
{
    capacity = n;
    str = new char[capacity];
}

mystring::mystring(const mystring &s)
{
    capacity = s.capacity;
    str = new char[capacity];
    for (int i = 0;i<strlen(s.str);i++)
    {
        str[i] = s.str[i];
        strcpy(str,s.str);
    }
}



int main()
{
    mystring s,s1(30);
    s.read();
    mystring s2(s);
    s2.print();
    //mystring s3 = s1; This will call copy cons
    mystring s3;
    s3.read();
    s3.print();
    cout << endl; 
    cout << (s3==s2) << endl;
    return 0;
}
