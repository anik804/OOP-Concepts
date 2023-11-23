#include<iostream>
using namespace std;

// base class
class CS
{
private :
    int x;
public :
    void setx( int n )
    {
        x = n;
    }
    void show()
    {
        cout << x << endl;
    }
};

// derived class
class EE : public CS //inherit kra
{
private :
    int y;
public :
    void sety( int n )
    {
        y = n;
    }
    void sum()
    {
        cout << x+y << endl;
    }
    void show1()
    {
        cout << y << endl;
    }
};

int main()
{
    EE ob1;
    ob1.sum();
    /// it's not working because in the sum function using the
    /// x varriable is a private member of base class
    /// we can not use it in the derived class

    return 0;
}

