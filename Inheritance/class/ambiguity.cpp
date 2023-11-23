/// solution of ambiguity

#include<bits/stdc++.h>
using namespace std;

class A //base class
{
private :

public :
    int x;

};

class B : virtual public A
{

};


//derive class
class C : virtual public A ///inherit kra
{

};

class D : public B , public C ///inherit kra
{
private :

public :
};

int main()
{
    C ob;
    ob.x = 10;

    B ob1;
    ob1.x = 10;

    D ob2;
    ob2.x = 10;
    cout << ob2.x << endl;

    ///virtual mane hocche jekhono
    /// 1 vabe pabe

    return 0;
}


///multiple er ambiguity er jonno

//ob.A::show();///scope kra dewa konta use krbe seita
