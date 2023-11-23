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
    void show1()
    {
        cout << y << endl;
    }
};

int main()
{
    CS ob1;
    ob1.setx(4);
    ob1.show();

    // access member of base class
    EE ob;
    ob.setx(5);
    ob.show();

    // access member of derived class
    EE ob2;
    ob2.sety(6);
    ob2.show1();

    return 0;
}
