/// In the following program the "&&" Operator Overloaded.

#include<iostream>
using namespace std;

class Coord
{
private :
    int x;
    int y;
public :
    Coord()
    {
        x = 0;
        y = 0;
    }
    Coord( int i , int j )
    {
        x = i;
        y = j;
    }
    void show()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
    int operator == ( Coord o4 )
    {
        return ( x == o4.x ) && ( y == o4.y );
    }
    int operator && ( Coord o4 )
    {
        return ( x && o4.x ) && ( y && o4.y );
    }
};

int main()
{
    Coord o1(1,2),o2(4,5),o3(0,2),o4(2,0);

    if( o1&&o2 )
    {
        cout << "O1 && O2 is true" << endl;
    }
    else
    {
        cout << "O1 && O2 is false" << endl;
    }
    if( o1&&o3 )
    {
        cout << "O1 && O3 is true" << endl;
    }
    else
    {
        cout << "O1 && O3 is false" << endl;
    }
    if( o1&&o4 )
    {
        cout << "O1 && O4 is true" << endl;
    }
    else
    {
        cout << "O1 && O4 is false" << endl;
    }

    return 0;
}

