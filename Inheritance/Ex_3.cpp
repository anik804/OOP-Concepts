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
class EE : private CS //inherit kra
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
    /// still it is not working because a private member of a base class
    /// is always private
    /// derived class never access to it.

    return 0;
}


