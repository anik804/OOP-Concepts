/// Here the "+" operator is overloaded to add an interger value
/// to a "Coord" object.

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
        cout << "X = " << x << endl;
        cout << "Y = " << y << endl;
    }
    Coord operator + ( Coord o4 )
    {
        Coord temp;

        temp.x = x + o4.x;
        temp.y = y + o4.y;

        return temp;
    }
    Coord operator + ( int i )
    {
        Coord temp;

        temp.x = x + i;
        temp.y = y + i;

        return temp;
    }
};

int main()
{
    Coord o1(5,9),o2(2,4),o3;

    o3 = o1 + o2;
    o3.show();

    o3 = o1 + 100;

    ///o3 = 100 + o1;//it will not work

    o3.show();

    return 0;
}
