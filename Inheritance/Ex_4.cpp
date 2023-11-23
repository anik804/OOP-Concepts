/// By using Protected ...we can solve the issue of access in private member

#include<iostream>
using namespace std;

class Base
{
private :
    int o;
protected :
    int a,b;
public :
    int c;
    void setx( int x , int y)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};

class Derived : public Base
{
private :
    int y;
public :

};

int main()
{
    Derived ob1;
    ob1.setx(1,2);
    ob1.show();

    return 0;
}
