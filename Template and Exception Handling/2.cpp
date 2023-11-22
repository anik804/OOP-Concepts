#include<bits/stdc++.h>
using namespace std;

///class template

/*template<class T>
class rect
{
private :
    T length;
    T width;
public :
    rect( T l , T w ) //constructor
    {
        length = l;
        width = w;
    }

    T show_area()
    {
        return length * width;
    }
};*/

///for multiple varriable

template<class T , class T1>
class rect
{
private :
    T length;
    T1 width;
public :
    rect( T l , T1 w ) //constructor
    {
        length = l;
        width = w;
    }

    T1 show_area()
    {
        return length * width;
    }
};

int main()
{
    rect< int , double > ob(4,2.2);

    cout << ob.show_area() << endl;

    return 0;
}
