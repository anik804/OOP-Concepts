#include<iostream>
using namespace std;

/// Creating 1st Base class
class B1
{
private :
    int a;
public :
    void seta( int x )
    {
        a=x;
    }
    void show_a()
    {
        cout << a << endl;
    }

};

/// Creating 2nd Base class
class B2
{
private :
    int b;
public :
    void setb( int y )
    {
        b = y;
    }
    int getb()
    {
        return b;
    }
    void show_b()
    {
        cout << b << endl;
    }
};

/// Creating derive class
class D1 : public B1, public B2
{
private :

public :

};

int main()
{
    D1 ob;

    ob.seta(5);
    ob.show_a();
    ob.setb(7);
    ob.show_b();

    return 0;
}
