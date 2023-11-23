/// Here is a short example that uses a virtual function
/// when a derived class doesnot override a virtual function,the base class version is used
/// we can see it in Derived2 class

#include<iostream>
using namespace std;

class Base
{
public :
    int i;
    Base(int x)
    {
        i = x;
    }
    virtual void func()
    {
        cout << "using base version of function" << endl;
        cout << i << endl;
    }
};

class Derived1 : public Base
{
public :
    Derived1(int x) : Base(x){}
    void func()
    {
        cout << "using Derived1 version of function" << endl;
        cout << i*i << endl;
    }
};

class Derived2 : public Base
{
public :
    Derived2(int x) : Base(x){}

};


int main()
{
    Base *p; //pointer of a base class
    Base ob1(10); //object of a base class

    Derived1 d1(10); //object of a derived1 class
    Derived2 d2(10); ////object of a derived2 class

    p = &ob1;
    p ->func(); //use base function

    p = &d1;
    p ->func(); //use derived1 function

    p = &d2;
    p ->func(); //use base function

    return 0;
}

