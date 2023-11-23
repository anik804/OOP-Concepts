#include<bits/stdc++.h>
using namespace std;

class A //base class
{
private :

public :
    int x;
    A(int a)
    {
        x = a;
    }
    void show()
    {
        cout << "show from A" << endl;
    }

};

class B : public A
{
public :
    B(int a) : A(a){}
    void show()
    {
        cout << "show from B" << endl;
    }

};

int main()
{
    B ob1(2);
    ob1.show();

    return 0;
}

