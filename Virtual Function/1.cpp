/// How A base class pointer can be used to access a derived class.

#include<bits/stdc++.h>
using namespace std;

class Base
{
private :
    int x;
public :
    void setx( int i )
    {
        x = i;
    }
    int getx()
    {
        return x;
    }
};

class Derived : public Base
{
private :
    int y;
public :
    void sety( int i )
    {
        y = i;
    }
    int gety()
    {
        return y;
    }

};

int main()
{
    Base *p; // pointer of a base class
    Base ob1; // object of a base class

    Derived ob2; // object of a derived class

    p = &ob1; //use p to access base object
    p ->setx(10);
    cout << "Base object x : " << p->getx() << endl;

    p = &ob2; // point to derived object
    p ->setx(99); // access derived object

    ob2.sety(66); // can not use p to set y ..do it directly

    cout << "Derived object x : " << p->getx() << endl;

    return 0;
}
/// base er pointer ...derive er pointer ke hold krte pare
///
